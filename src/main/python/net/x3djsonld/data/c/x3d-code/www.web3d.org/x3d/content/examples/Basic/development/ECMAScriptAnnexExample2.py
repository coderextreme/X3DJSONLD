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
    meta(content='ECMAScriptAnnexExample2.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple script example with no visible rendering results.',name='description'),
    meta(content="VRML97 translation has extraneous 'url [ ]' output.",name='error'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ECMAScriptAnnexExample2.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Example 2, VRML 97 Annex C, ECMAScript Scripting Reference","https://www.web3d.org/technicalinfo/specifications/vrml97/part1/javascript.html#Example","Edits: wrapped using a Transform node for completeness, renamed duplicate url field"],title='ECMAScriptAnnexExample2.wrl'),
    Transform(DEF='ROOT_TRANSFORM',
      children=[
      Script(DEF='Example_2',directOutput=True,
        field=[
        field(accessType='initializeOnly',name='myself',type='SFNode',
          children=[
          Script(USE='Example_2')]),
        field(accessType='initializeOnly',name='root',type='SFNode',
          children=[
          Transform(USE='ROOT_TRANSFORM')]),
        field(accessType='initializeOnly',name='identifier',type='MFString',value=["foo.wrl"]),
        field(accessType='inputOnly',name='nodesLoaded',type='SFNode'),
        field(accessType='inputOnly',name='trigger_event',type='SFBool')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ECMAScriptAnnexExample2.py")
