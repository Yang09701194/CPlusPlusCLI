using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace CSharpUtil
{
    public class Helper
    {

        public string UrlEncodeUtil(string str)
        {
            return System.Web.HttpUtility.UrlEncode(str);
        }

    }
}
