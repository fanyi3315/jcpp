#include "jcpp/outlook/server/JIOutlookProxy.h"
#include "jcpp/outlook/server/JOutlook.h"
#include "jcpp/util/JList.h"
#include "jcpp/util/JArrayList.h"
#include "jcpp/lang/reflect/JConstructor.h"
#include "jcpp/lang/reflect/JModifier.h"
#include "jcpp/lang/JPrimitiveBoolean.h"

using namespace jcpp::lang::reflect;
using namespace jcpp::lang;
using namespace jcpp::util;
using namespace jcpp;


namespace jcpp{
	namespace outlook {
		namespace server{


            JIOutlookProxy::JIOutlookProxy():JProxy(getClazz()){
            }

            void JIOutlookProxy::openMailMessageInOutlook(JMailMessage *msg) {
                JList* args=new JArrayList();
                args->add(dynamic_cast<JObject*>(msg));
                JList* types=new JArrayList();
                types->add(JMailMessage::getClazz());
                invoke(new JString("openMailMessageInOutlook"),types,args);
                return;
            }

            JIOutlookProxy::~JIOutlookProxy(){
            }
        }
    }
}
