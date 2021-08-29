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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    # Import note:  the following meta tags were created during
      Vrml97ToX3d translation.  Please update or delete them as
      appropriate.
    meta(content='animated_patch22.x3d',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='Xeena VRML importer',name='translator'),
    meta(content='11 February 2003',name='imported'),
    meta(content='11 February 2003',name='modified'),
    meta(content='*enter version here*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2001',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter image filename/url here*',name='image'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter keywords here*',name='subject'),
    meta(content='*enter online url address for this file here*',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    WorldInfo(info=['Nurbs 2*2 Patch with animated controlPoint'],title='Nurbs 2*2 animated'),
    ExternProtoDeclare(name='NurbsPatchSurface',url=["urn:inet:blaxxun.com:node:NurbsPatchSurface"
"nurbs.wrl#NurbsPatchSurface"
"http://www.blaxxun.com/vrml/protos/nurbs.wrl#NurbsPatchSurface"],
      field=[
      field(accessType='inputOutput',name='uTessellation',type='SFInt32'),
      field(accessType='inputOutput',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',name='vOrder',type='SFInt32'),
      field(accessType='initializeOnly',name='vKnot',type='MFFloat'),
      field(accessType='inputOutput',name='weight',type='MFFloat'),
      field(accessType='initializeOnly',name='uKnot',type='MFFloat'),
      field(accessType='inputOutput',name='controlPoint',type='MFVec3f'),
      field(accessType='inputOutput',name='vTessellation',type='SFInt32'),
      field(accessType='initializeOnly',name='uDimension',type='SFInt32'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='initializeOnly',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',name='uOrder',type='SFInt32'),
      field(accessType='initializeOnly',name='vDimension',type='SFInt32')]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,1.0),emissiveColor=(1.0,0.0,0.0),specularColor=(1.0,1.0,1.0)),
          texture=ImageTexture(url=["texture.jpg"]),
          children=[
          ProtoInstance(DEF='nurb',name='NurbsPatchSurface',
            fieldValue=[
            fieldValue(name='uTessellation',value=16),
            fieldValue(name='texCoord'),
            fieldValue(name='vOrder',value=2),
            fieldValue(name='vKnot',value=[0.0,0.0,1.0,1.0]),
            fieldValue(name='weight'),
            fieldValue(name='uKnot',value=[0.0,0.0,1.0,1.0]),
            fieldValue(name='controlPoint',value=[(-1.0,0.0,0.0),(1.0,0.0,0.0),(-1.0,1.0,0.0),(1.0,1.0,0.0)]),
            fieldValue(name='uDimension',value=2),
            fieldValue(name='vTessellation',value=16),
            fieldValue(name='solid',value=False),
            fieldValue(name='uOrder',value=2),
            fieldValue(name='ccw',value=False),
            fieldValue(name='vDimension',value=2)])]))]),
    Script(DEF='animate',directOutput=True,
      field=[
      field(accessType='initializeOnly',name='nurb',type='SFNode',
        children=[
        ProtoInstance(USE='nurb',name='NurbsPatchSurface')]),
      field(accessType='inputOnly',name='setTime',type='SFTime')]),
    TimeSensor(DEF='TimeSource',cycleInterval=2.0,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='TimeSource',toField='setTime',toNode='animate')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for animated_patch22.py")
