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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='JavaSaiCreateNodes.x3d',name='title'),
    meta(content='Java Scene Authoring Interface (JSAI) scene and source code example that show using createX3DFromString to create nodes.',name='description'),
    meta(content='X3D Working Group',name='creator'),
    meta(content='Xeena VRML importer',name='translator'),
    meta(content='23 February 2005',name='imported'),
    meta(content='23 February 2005',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='SAIExample5.java',name='reference'),
    meta(content='build, compile, test',name='TODO'),
    meta(content='https://www.web3d.org/files/specifications/19777-2/V3.0/Part2/X3D_Java.html',name='reference'),
    meta(content='X3D language bindings, ISO/IEC 19777-2, Part 2: Java, D.3 Create nodes',name='specificationSection'),
    meta(content='https://www.web3d.org/files/specifications/19777-2/V3.0/Part2/examples.html#CreateNodes',name='specificationUrl'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://www.web3d.org/TaskGroups/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/JavaSaiCreateNodes.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='JavaSaiCreateNodes.x3d'),
    Transform(DEF='HOLDER',translation=(-2.0,0.0,0.0)),
    Script(DEF='SC',url=["SAIExample5.class","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/SAIExample5.class"],
      field=[
      field(accessType='outputOnly',name='children',type='MFNode')]),
    ROUTE(fromField='children',fromNode='SC',toField='children',toNode='HOLDER')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for JavaSaiCreateNodes.py")
