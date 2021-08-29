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
    meta(content='Lighthouse.x3d',name='title'),
    meta(content='Lo Weng Wah',name='creator'),
    meta(content='28 August 2000',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='10 November 2002',name='modified'),
    meta(content='Model of a Lighthouse with Rotating Light Beam',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/Lighthouse.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Light_View',orientation=(0.2,0,0,-0.2),position=(10,10,50)),
    Viewpoint(description='Bird View',orientation=(1,0,0,-1.4),position=(10,50,10)),
    Viewpoint(description='15m away',position=(0,0,15)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.3,0.7),(.0,.1,.8),(0.0,0.0,0.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1,1,1)]),
    #  Top of Lighthouse 
    Group(
      children=[
      Transform(DEF='RotatingLightBeam',center=(20,0,0),translation=(-20,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(.9,.9,.2),specularColor=(1,1,0),transparency=0.3)),
          geometry=Extrusion(DEF='Full_Cylinder',creaseAngle=.785,crossSection=[(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,-0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(1.6,1.6),(0.4,0.4)],solid=False,spine=[(-20,0,0),(20,0,0)])),
        TimeSensor(DEF='Clock',cycleInterval=20,loop=True),
        OrientationInterpolator(DEF='ColumnPath',key=[0,0.5,1],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])])]),
    #  Design of Lighthouse 
    Transform(DEF='Column',
      children=[
      Shape(
        geometry=Cylinder(height=1.6),
        appearance=Appearance(
          material=Material(shininess=.2))),
      Transform(
        children=[
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
      Transform(DEF='Roof',translation=(0,0.8,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.2,radius=1.4),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0),shininess=.2)))]),
      Transform(translation=(0,-1.6,0),
        children=[
        Transform(USE='Roof')]),
      Transform(translation=(0,1.2,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=1.25,height=1),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5),shininess=.2)))]),
      Transform(rotation=(0,0,1,1.57),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=.785,crossSection=[(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,-0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(2.3,2.3),(0.7,0.7)],solid=False,spine=[(-12,0,0),(0,0,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1),shininess=.2)))])]),
    #  Mountain 
    Transform(scale=(4,2,4),translation=(-18,-21,-18),
      children=[
      Shape(
        geometry=ElevationGrid(creaseAngle=2.0,height=[0.0,0.0,0.5,1.0,0.5,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.5,0.5,0.0,0.0,0.0,0.0,0.0,0.5,0.5,3.0,1.0,0.5,0.0,1.0,0.0,0.6,0.5,2.0,4.5,2.5,1.0,1.5,0.5,0.4,2.5,3.0,4.5,4.5,4.5,3.0,1.0,0.0,0.5,2.0,2.0,2.8,4.5,4.0,2.0,0.5,0.0,0.0,0.0,0.5,1.5,1.0,2.0,3.0,1.5,0.0,0.0,0.5,0.5,0.0,0.3,1.0,2.0,1.5,0.5,0.0,0.3,0.4,0.0,0.0,0.4,0.5,0.0,0.0],xDimension=9,zDimension=9,
          color=Color(DEF='Mountain_Color',color=[(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.2,0.6,0.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.5,0.4,0.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.0,0.5,0.1),(0.5,0.4,0.0),(0.2,0.6,0.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.2,0.6,0.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.4,0.3,0.1),(0.7,0.7,0.7),(0.5,0.4,0.0),(0.2,0.6,0.1),(0.3,0.6,0.6),(0.0,0.5,0.1),(0.2,0.6,0.0),(0.5,0.4,0.0),(0.5,0.4,0.0),(0.7,0.7,0.7),(0.8,0.8,0.8),(0.5,0.5,0.7),(0.5,0.5,0.7),(0.2,0.6,0.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.2,0.6,0.1),(0.2,0.6,0.1),(0.2,0.6,0.1),(0.5,0.5,0.7),(0.7,0.7,0.7),(0.5,0.4,0.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.2,0.6,0.1),(0.2,0.6,0.0),(0.5,0.4,0.0),(0.5,0.5,0.7),(0.2,0.6,0.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.5,0.4,0.0),(0.2,0.6,0.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.3,1.0),(0.0,0.5,0.1),(0.0,0.3,1.0),(0.0,0.3,1.0)])),
        appearance=Appearance(
          material=Material(ambientIntensity=0.4,diffuseColor=(1,1,1),shininess=.2,specularColor=(0.71,0.70,0.56))))]),
    #  Sea Depiction 
    Transform(DEF='Sea',scale=(100,15,100),translation=(-100,-22,-100),
      children=[
      Shape(
        geometry=ElevationGrid(creaseAngle=1.57,height=[0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0,0.1,0.0,0.0,0.1,0.0,0.0,0.1,0.0],xDimension=9,zDimension=10),
        appearance=Appearance(
          material=Material(ambientIntensity=0.4,diffuseColor=(0,0,1),shininess=.2,specularColor=(0.71,0.70,0.56))))]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ColumnPath'),
    ROUTE(fromField='value_changed',fromNode='ColumnPath',toField='set_rotation',toNode='RotatingLightBeam')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Lighthouse.py")
