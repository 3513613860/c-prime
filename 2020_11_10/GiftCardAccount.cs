using System;
using System.Collections.Generic;
using System.Text;

namespace OOProgramming
{
    public class GiftCardAccount : BankAccount
    {
        // <GiftCardAccountConstruction>
        private decimal _monthlyDeposit = 0m;

        public GiftCardAccount(string name, decimal initialBalance, decimal monthlyDeposit = 0) : base(name, initialBalance)
            => _monthlyDeposit = monthlyDeposit;
        // </GiftCardAccountConstruction>

        //添加每月的存款
        public override void PerformMonthEndTransactions()
        {
            if (_monthlyDeposit != 0)
            {
                MakeDeposit(_monthlyDeposit, DateTime.Now, "Add monthly deposit");
            }
        }
    }
}
