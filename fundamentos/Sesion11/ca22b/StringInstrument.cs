using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ca22b
{
    internal class StringInstrument : Musicalnstrument, IPuckable
    {
        public string stringsType { get; set; } = "";

        public override void Pause()
        {
            throw new NotImplementedException();
        }
    }