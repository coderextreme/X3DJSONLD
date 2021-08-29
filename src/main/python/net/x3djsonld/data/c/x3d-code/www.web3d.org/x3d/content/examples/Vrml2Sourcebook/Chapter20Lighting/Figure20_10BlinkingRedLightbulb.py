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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Figure20_10BlinkingRedLightbulb.x3d',name='title'),
    meta(content='A blinking lightbulb showing multiple lighting effects.',name='description'),
    meta(content='Figure 20.10, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch20/20fig10.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='8 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Xj3D run-time exception',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_10BlinkingRedLightbulb.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure20_10BlinkingRedLightbulb.x3d'),
    Viewpoint(description='Blinking red light bulb',orientation=(1,0,0,1.1),position=(0,2,0.25)),
    #  It is almost always a good idea to turn off headlight to avoid washing out other lighting effects in a scene 
    NavigationInfo(headlight=False),
    #  Ceiling height 
    Transform(translation=(0,3,0),
      children=[
      Transform(translation=(0,-0.05,0),
        children=[
        DirectionalLight(DEF='CeilingDirectionalLight',ambientIntensity=1,direction=(0,1,0),intensity=0.15),
        PointLight(DEF='BulbLight',color=(1,0,0),intensity=0.5,radius=16),
        Shape(
          geometry=Sphere(DEF='Bulb',radius=0.04),
          appearance=Appearance(
            material=Material(DEF='BulbMaterial',diffuseColor=(0,0,0),emissiveColor=(1,0.3,0.3)))),
        Transform(translation=(-0.25,0.05,-0.25),
          children=[
          Shape(
            geometry=ElevationGrid(height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],solid=False,xDimension=11,xSpacing=0.05,zDimension=11,zSpacing=0.05),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))))])])]),
    #  Animation brightness and colors 
    TimeSensor(DEF='Clock',cycleInterval=4,loop=True),
    ScalarInterpolator(DEF='BulbIntensity',key=[0,0.5,0.5,1],keyValue=[0.8,0.8,0,0]),
    ColorInterpolator(DEF='BulbDiffuse',key=[0,0.5,0.5,1],keyValue=[(0.3,0.3,0.3),(0.3,0.3,0.3),(1,0.3,0.3),(1,0.3,0.3)]),
    ColorInterpolator(DEF='BulbEmissive',key=[0,0.5,0.5,1],keyValue=[(1,0.3,0.3),(1,0.3,0.3),(0,0,0),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='BulbIntensity'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='BulbDiffuse'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='BulbEmissive'),
    ROUTE(fromField='value_changed',fromNode='BulbIntensity',toField='set_intensity',toNode='BulbLight'),
    ROUTE(fromField='value_changed',fromNode='BulbDiffuse',toField='set_diffuseColor',toNode='BulbMaterial'),
    ROUTE(fromField='value_changed',fromNode='BulbEmissive',toField='set_emissiveColor',toNode='BulbMaterial')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure20_10BlinkingRedLightbulb.py")
