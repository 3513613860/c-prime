  
using System;
using System.Collections.Generic;
using System.Text;

namespace OOProgramming
{
    class LineOfCreditAccount : BankAccount
    {
        
        //构造函数
        public LineOfCreditAccount(string name, decimal initialBalance, decimal creditLimit) : base(name, initialBalance, -creditLimit)
        {
        }
        // </ConstructLineOfCredit>

        //重写父类方法
        public override void PerformMonthEndTransactions()
        {
            if (Balance < 0)
            {
                // Negate the balance to get a positive interest charge:
                var interest = -Balance * 0.07m;
                MakeWithdrawal(interest, DateTime.Now, "Charge monthly interest");
            }
        }
        // </ApplyMonthendInterest>

        //重写父类方法
        protected override Transaction CheckWithdrawalLimit(bool isOverdrawn) =>
            isOverdrawn
            ? new Transaction(-20, DateTime.Now, "Apply overdraft fee")
            : default;
        // </AddOverdraftFee>
    }
}