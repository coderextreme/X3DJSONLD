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
    meta(content='XvlShellExternProtoDeclare.x3d',name='title'),
    meta(content='This is a development scene used to generate the ExternProtoDeclaration for the X3dToVrml97 stylesheet.',name='description'),
    meta(content='This scene is not for example use, instead it is a development scene used during X3D design.',name='warning'),
    meta(content='Marc Jablonski',name='creator'),
    meta(content='22 November 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test X3D DTD experimental extensions mechanisms, the XVL nodes are not legal X3D',name='error'),
    meta(content='readme.txt',name='reference'),
    meta(content='.wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any XvlShell nodes.',name='info'),
    meta(content='docs/LatticeXVL/LatticeXvlOverview.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/docs/LatticeXVL/LatticeXvlOverview.html',name='reference'),
    meta(content='http://www.xvl3d.com',name='reference'),
    meta(content='Lattice XVL parametric geometry X3D VRML',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellExternProtoDeclare.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='XvlShellExternProtoDeclare.x3d'),
    ExternProtoDeclare(name='XvlShell',url=["XvlShellProtoDeclare.wrl#XvlShell","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellProtoDeclare.wrl#XvlShell","XvlShellProtoDeclare.x3d#XvlShell","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellProtoDeclare.x3d#XvlShell"],
      #  Allowable children of XvlShell: a single Coordinate node (required for rendering) and a single TextureCoordinate node (optional) 
      field=[
      field(accessType='initializeOnly',name='shellType',type='SFInt32'),
      field(accessType='initializeOnly',name='numberOfDivisions',type='SFInt32'),
      field(accessType='initializeOnly',name='coord',type='SFNode'),
      field(accessType='initializeOnly',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',name='vertexRound',type='MFFloat'),
      field(accessType='initializeOnly',name='edgeBeginCoordIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='edgeEndCoordIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='edgeRound',type='MFFloat'),
      field(accessType='initializeOnly',name='edgeBeginVector',type='MFVec3f'),
      field(accessType='initializeOnly',name='edgeEndVector',type='MFVec3f'),
      field(accessType='initializeOnly',name='faceCoordIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='faceTexCoordIndex',type='MFInt32'),
      field(accessType='initializeOnly',name='faceEmpty',type='MFBool'),
      field(accessType='initializeOnly',name='faceHidden',type='MFBool')]),
    Background(groundColor=[(0,.1,.2)],skyColor=[(0,.1,.2)]),
    Viewpoint(description='XvlShell ExternProtoDeclare',position=(0,0,8)),
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Anchor(description='XvlShellAttributeAll',parameter=["target=_blank"],url=["XvlShellAttributeAll.x3d","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellAttributeAll.x3d","XvlShellAttributeAll.wrl","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellAttributeAll.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["XvlShellExternProtoDeclare.wrl","is an ExternProtoDeclare definition file.","","To see an example scene using this new node,","click this text and view XvlShellAttributeAll"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for XvlShellExternProtoDeclare.py")
