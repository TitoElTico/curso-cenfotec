using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ca22b
{
    internal abstract class InstrumentBase
    {
        protected string name = "";
        public abstract void Play();
        public abstract void Stop();
    }
}
