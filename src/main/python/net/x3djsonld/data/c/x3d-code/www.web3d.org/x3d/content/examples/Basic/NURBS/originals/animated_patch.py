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
    meta(content='animated_patch.x3d',name='title'),
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
    WorldInfo(info=['Nurbs 4*4 Patch with animated controlPoint'],title='Nurbs 4*4 animated'),
    Transform(translation=(-1.5,-1.5,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,1.0),emissiveColor=(1.0,0.0,0.0),specularColor=(1.0,1.0,1.0)),
          texture=ImageTexture(url=["texture.jpg"])),
        texCoord=NurbsPatchSurface(DEF='NurbsPatchSurface',ccw=False,controlPoint=0,0,0,1,0,0,2,0,0,3,0,0,0,1,0,1,1,0,2,1,0,3,1,0,0,2,0,1,2,0,2,2,0,3,2,0,0,3,0,1,3,0,2,3,0,3,3,0,solid=False,uDimension=4,uKnot=[0,0,0,0,3,3,3,3],uOrder=4,uTessellation=16,vDimension=4,vKnot=[0,0,0,0,3,3,3,3],vOrder=4,vTessellation=16,weight=[1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1]))]),
    TimeSensor(DEF='TimeSource',cycleInterval=2.0,loop=True),
    CoordinateInterpolator(DEF='CI',keyValue=[]),
    ROUTE(fromField='fraction_changed',fromNode='TimeSource',toField='setTime',toNode='CI'),
    ROUTE(fromField='value_changed',fromNode='CI',toField='set_controlPoint',toNode='NurbsPatchSurface')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for animated_patch.py")
