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
    meta(content='XvlShellProtoDeclare.x3d',name='title'),
    meta(content='This is a development scene used to define the ProtoDeclaration for the XvlShell native node.',name='description'),
    meta(content='This scene is not for example use, instead it is a development scene used during X3D design.',name='warning'),
    meta(content='Marc Jablonski',name='creator'),
    meta(content='22 November 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test X3D DTD experimental extensions mechanisms, the XVL nodes are not legal X3D',name='error'),
    meta(content='readme.txt',name='reference'),
    meta(content='docs/LatticeXvl/LatticeXvlOverview.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/docs/LatticeXvl/LatticeXvlOverview.html',name='reference'),
    meta(content='http://www.xvl3d.com',name='reference'),
    meta(content='Lattice XVL parametric geometry X3D VRML',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellProtoDeclare.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='XvlShellProtoDeclare.x3d'),
    ProtoDeclare(name='XvlShell',
      ProtoInterface=ProtoInterface(
        #  Allowable children of XvlShell: a single Coordinate node (required for rendering) and a single TextureCoordinate node (optional) 
        field=[
        field(accessType='initializeOnly',name='shellType',type='SFInt32',value=1),
        field(accessType='initializeOnly',name='numberOfDivisions',type='SFInt32',value=4),
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
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='IFS',
          coord=Coordinate(),
          normal=Normal(),
          texCoord=TextureCoordinate(),),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='XvlShellScript',directOutput=True,url=["XvlShell.class","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShell.class"],
          field=[
          field(accessType='initializeOnly',name='mShellType',type='SFInt32'),
          field(accessType='initializeOnly',name='mNumDiv',type='SFInt32'),
          field(accessType='initializeOnly',name='mCoord',type='SFNode'),
          field(accessType='initializeOnly',name='mTexCoord',type='SFNode'),
          field(accessType='initializeOnly',name='mVtxRound',type='MFFloat'),
          field(accessType='initializeOnly',name='mEdgeV0',type='MFInt32'),
          field(accessType='initializeOnly',name='mEdgeV1',type='MFInt32'),
          field(accessType='initializeOnly',name='mEdgeRound',type='MFFloat'),
          field(accessType='initializeOnly',name='mEdgeVec0',type='MFVec3f'),
          field(accessType='initializeOnly',name='mEdgeVec1',type='MFVec3f'),
          field(accessType='initializeOnly',name='mFaceCoordIndex',type='MFInt32'),
          field(accessType='initializeOnly',name='mFaceTexCoordIndex',type='MFInt32'),
          field(accessType='initializeOnly',name='mFaceEmpty',type='MFBool'),
          field(accessType='initializeOnly',name='mFaceHidden',type='MFBool'),
          field(accessType='outputOnly',name='coord_changed',type='SFNode'),
          field(accessType='outputOnly',name='coordIndex_changed',type='MFInt32'),
          field(accessType='outputOnly',name='texCoord_changed',type='SFNode'),
          field(accessType='outputOnly',name='normal_changed',type='SFNode')],
          IS=IS(
            connect=[
            connect(nodeField='mShellType',protoField='shellType'),
            connect(nodeField='mNumDiv',protoField='numberOfDivisions'),
            connect(nodeField='mCoord',protoField='coord'),
            connect(nodeField='mTexCoord',protoField='texCoord'),
            connect(nodeField='mVtxRound',protoField='vertexRound'),
            connect(nodeField='mEdgeV0',protoField='edgeBeginCoordIndex'),
            connect(nodeField='mEdgeV1',protoField='edgeEndCoordIndex'),
            connect(nodeField='mEdgeRound',protoField='edgeRound'),
            connect(nodeField='mEdgeVec0',protoField='edgeBeginVector'),
            connect(nodeField='mEdgeVec1',protoField='edgeEndVector'),
            connect(nodeField='mFaceCoordIndex',protoField='faceCoordIndex'),
            connect(nodeField='mFaceTexCoordIndex',protoField='faceTexCoordIndex'),
            connect(nodeField='mFaceEmpty',protoField='faceEmpty'),
            connect(nodeField='mFaceHidden',protoField='faceHidden')])),
        ROUTE(fromField='coord_changed',fromNode='XvlShellScript',toField='set_coord',toNode='IFS'),
        ROUTE(fromField='coordIndex_changed',fromNode='XvlShellScript',toField='set_coordIndex',toNode='IFS'),
        ROUTE(fromField='texCoord_changed',fromNode='XvlShellScript',toField='set_texCoord',toNode='IFS'),
        ROUTE(fromField='normal_changed',fromNode='XvlShellScript',toField='set_normal',toNode='IFS')])),
    Background(groundColor=[(0,.1,.2)],skyColor=[(0,.1,.2)]),
    Viewpoint(description='Hello LatticeXvl prototype',position=(0,0,8)),
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Anchor(description='XvlShellAttributeAll',parameter=["target=_blank"],url=["XvlShellAttributeAll.wrl","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellAttributeAll.wrl","XvlShellAttributeAll.x3d","https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellAttributeAll.x3d"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["XvlShellProtoDeclare.wrl","is a ProtoDeclare definition file.","","To see an example scene using this new node,","click this text and view XvlShellAttributeAll"],
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

print ("python x3d.py load successful for XvlShellProtoDeclare.py")
