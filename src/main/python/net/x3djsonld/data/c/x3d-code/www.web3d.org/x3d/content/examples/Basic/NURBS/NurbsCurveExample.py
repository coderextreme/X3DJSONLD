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
    component(level=1,name='NURBS'),
    meta(content='NurbsCurveExample.x3d',name='title'),
    meta(content='NurbsCurve exemplar showing controlPoint animation. Upper example has knot values explicitly defined, lower example has implicit knot values.',name='description'),
    meta(content='Charles Adams, Vincent Marchetti, Don Brutzman',name='creator'),
    meta(content='4 February 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='videos/NurbsCurveExample.mov',name='MovingImage'),
    meta(content='check NurbsCurve containerField handling and weight defaults',name='TODO'),
    meta(content='http://edocs.nps.edu/npspubs/scholarly/theses/2003/Jun/03Jun_Adams.pdf',name='reference'),
    meta(content='NURBS Curve Example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsCurveExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsCurveExample.x3d'),
    Viewpoint(description='NurbsCurve',position=(12,7,18)),
    Transform(translation=(0,5,0),
      children=[
      Shape(
        geometry=NurbsCurve(DEF='NurbsCurveKnotted',knot=[0,0,0,0,0.5,1,1,1,1],order=4,tessellation=30,weight=[1,1,1,1,1],
          controlPoint=Coordinate(DEF='np',point=[(4,6,0),(7,12,0),(11,6,0),(15,2,0),(20,6,0)])),
        appearance=Appearance(DEF='LightGreenAppearance',
          material=Material(diffuseColor=(0.8,1,0.8),emissiveColor=(0.8,1,0.8)))),
      Transform(translation=(0,7,0),
        children=[
        Shape(
          geometry=Text(string=["NurbsCurve with knots"]),
          appearance=Appearance(USE='LightGreenAppearance'))])]),
    Shape(
      geometry=NurbsCurve(DEF='NurbsCurveUnknotted',order=4,tessellation=30,
        controlPoint=Coordinate(USE='np')),
      appearance=Appearance(DEF='LightBlueAppearance',
        material=Material(diffuseColor=(0.8,0.8,1),emissiveColor=(0.8,0.8,1)))),
    Transform(translation=(0,7,0),
      children=[
      Shape(
        geometry=Text(string=["NurbsCurve without knots"]),
        appearance=Appearance(USE='LightBlueAppearance'))]),
    CoordinateInterpolator(DEF='ci',key=[0,.5,1],keyValue=[(4,6,0),(7,12,0),(11,6,0),(15,2,0),(20,6,0),(4,6,0),(7,0,0),(11,6,0),(15,10,0),(20,6,0),(4,6,0),(7,12,0),(11,6,0),(15,2,0),(20,6,0)]),
    TimeSensor(DEF='ts',cycleInterval=6,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='ts',toField='set_fraction',toNode='ci'),
    ROUTE(fromField='value_changed',fromNode='ci',toField='set_point',toNode='np'),
    #  Authoring hint 
    Transform(DEF='GridXY_20x20Fixed_AdjustScale',translation=(12,7,0),
      children=[
      Inline(DEF='GridXY_20x20Fixed',url=["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NurbsCurveExample.py")
