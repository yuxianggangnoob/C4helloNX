#include <uf_defs.h>
#include <NXOpen/View.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/ListingWindow.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Body.hxx>
#include <algorithm>
#include <sstream>
#include <NXOpen/Features_CylinderBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>

using namespace NXOpen;

extern "C" DllExport int ufusr_ask_unload()
{
    return (int)Session::LibraryUnloadOptionImmediately;
}

extern "C" DllExport void ufusr(char* param, int* retCode, int paramLen)
{
    NXOpen::Session* theSession;
    theSession = NXOpen::Session::GetSession();
    NXOpen::ListingWindow* list;
    list = theSession->ListingWindow();
    list->Open();
    list->WriteLine("hello nx");

}
