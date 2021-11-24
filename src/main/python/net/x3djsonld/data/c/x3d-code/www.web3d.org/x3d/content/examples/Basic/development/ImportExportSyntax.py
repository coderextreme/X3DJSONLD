###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ImportExportSyntax.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 January 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Demonstrate IMPORT/EXPORT syntax. Better examples needed, split across 2 files for separate IMPORT and EXPORT.',name='description'),
    meta(content='untested in any browser',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ImportExportSyntax.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ImportExportSyntax.x3d'),
    NavigationInfo(DEF='LocalNavInfo'),
    EXPORT(AS='NI',localDEF='LocalNavInfo'),
    Transform(scale=(2,2,2),
      #  the following Inline presumably contains some node with DEF="SomeRemoteNodeNameInsideInlinedScene" 
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
      IMPORT(AS='NewImportedNodeName',importedDEF='SomeRemoteNodeNameInsideInlinedScene',inlineDEF='CoordinateAxes')]),
    #  ===================== 
    #  Abstract spec IMPORT example 
    Inline(DEF='I1',url=["someUrl.x3d","http://online.address/someUrl.x3d"]),
    IMPORT(AS='I1Root',importedDEF='rootTransform',inlineDEF='I1'),
    TimeSensor(DEF='CLOCK'),
    PositionInterpolator(DEF='PI',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='PI'),
    ROUTE(fromField='value_changed',fromNode='PI',toField='set_translation',toNode='I1Root'),
    #  ===================== 
    #  Abstract spec EXPORT example 
    Transform(DEF='T1'),
    EXPORT(AS='rootTransform',localDEF='T1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ImportExportSyntax.py")
