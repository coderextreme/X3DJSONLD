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
    meta(content='PixelTextureSnowman.x3d',name='title'),
    meta(content='This snowman example shows a colorful PixelTexture applied to X3D primitive shapes - happy holidays!',name='description'),
    meta(content='Craig Schwetje, Leonard Daly and Don Brutzman',name='creator'),
    meta(content='2 February 2006',name='created'),
    meta(content='25 August 2008',name='translated'),
    meta(content='29 September 2020',name='modified'),
    meta(content='http://en.wikipedia.org/wiki/Snowman',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/frosty2.mid',name='Sound'),
    meta(content='http://www.the-north-pole.com/carols/frosty.html',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureSnowman.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PixelTextureSnowman.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='PixelTexture Snowman',orientation=(1,0,0,-0.17985),position=(0,2,11)),
    Sound(location=(0,1.6,0),maxBack=50,maxFront=50,minBack=5,minFront=5,priority=1,
      source=AudioClip(description='Frosty the Snowman',loop=True,url=["frosty2.mid","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/frosty2.mid"])),
    Transform(translation=(0,-2.5,2),
      children=[
      Billboard(
        children=[
        Anchor(DEF='WikipediaAnchorLink',description='Wikipedia Snowman entry',parameter=["target=_blank"],url=["http://en.wikipedia.org/wiki/Snowman"],
          children=[
          Shape(
            geometry=Text(string=["Click here to learn more","about snowmen"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
            appearance=Appearance(
              material=Material(DEF='Autumn11',ambientIntensity=0.25641,diffuseColor=(1,0.160784,0.764706),shininess=1,specularColor=(0.48655,0.319155,0.444036)))),
          #  Add transparent geometry over the text to make clicking (i.e. Anchor selection) easier 
          Shape(
            geometry=Box(size=(6,1.5,0.02)),
            appearance=Appearance(
              material=Material(transparency=1)))])])]),
    Transform(DEF='SnowmanRoot',
      children=[
      OrientationInterpolator(DEF='TwistInterpolator',key=[0,0.22,0.25,0.5,0.73,0.75,1],keyValue=[(0,1,0,0),(0,1,0,5.75959),(0,1,0,5.75959),(0,1,0,0),(0,1,0,0.5236),(0,1,0,0.5236),(0,1,0,0)]),
      TimeSensor(DEF='Clock',cycleInterval=6,loop=True),
      ROUTE(fromField='value_changed',fromNode='TwistInterpolator',toField='rotation',toNode='SnowmanRoot'),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TwistInterpolator'),
      #  Hat 
      Transform(translation=(0,3.6,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.003922,0.003922,0.003922))),
          geometry=Cylinder(height=1,radius=0.5))]),
      Transform(translation=(0,3.2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.003922,0.003922,0.003922))),
          geometry=Cylinder(height=0.2))]),
      #  Head 
      Transform(translation=(0,2.6,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(DEF='PixelColors',image=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888],repeatS=False,repeatT=False)),
          geometry=Sphere(radius=.75))]),
      #  Eyes 
      Transform(translation=(0.3,2.7,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.18))]),
      Transform(translation=(-0.3,2.7,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.18))]),
      #  Nose 
      Transform(rotation=(1,0,0,1.57),translation=(0,2.5,0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.901961,0.403922,0),emissiveColor=(1,0.145098,0.058824),specularColor=(1,0.454902,0.360784))),
          geometry=Cone(bottomRadius=0.3,height=1.75))]),
      #  Scarf 
      Transform(translation=(0,1.975,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Cylinder(height=0.175,radius=0.8))]),
      Transform(translation=(.7,1.1,.8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.725,1.2,.85),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.7,1.3,.8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.7,1.4,.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.7,1.5,.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.7,1.6,.7),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.7,1.7,.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.6,1.8,.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.55,1.9,.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(.55,2,.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      #  Backside of scarf 
      Transform(translation=(-.7,1.1,-.8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.725,1.2,-.85),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.7,1.3,-.8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.7,1.4,-.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.7,1.5,-.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.7,1.6,-.7),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.7,1.7,-.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.6,1.8,-.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.55,1.9,-.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-.55,2,-.65),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Sphere(radius=.1))]),
      #  Mouth 
      #  Middle Mouthpiece 
      Transform(translation=(0,2.2,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(0.1,2.2,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(0.2,2.2,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-0.1,2.2,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(-0.2,2.2,.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      #  Pipe 
      Transform(rotation=(0.96225,0.19245,-0.19245,1.57),translation=(0.1,2.2,0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.219608,0.137255,0))),
          geometry=Cylinder(radius=0.03))]),
      Transform(translation=(.45,2.3,1.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.219608,0.137255,0))),
          geometry=Cylinder(height=.2,radius=.1))]),
      #  Body 
      Transform(translation=(0,1.15,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(USE='PixelColors')),
          geometry=Sphere(radius=1.1))]),
      #  Arms 
      Transform(rotation=(0,0,1,1.57),translation=(0,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.25,.05))),
          geometry=Cylinder(height=4.9,radius=0.1))]),
      Transform(rotation=(0,0.92848,0.37139,1.57),translation=(2,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.25,.05))),
          geometry=Cylinder(height=.9,radius=0.05))]),
      Transform(rotation=(0.84515,-0.50709,0.16903,1.57),translation=(1.5,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.25,.05))),
          geometry=Cylinder(height=.7,radius=0.03))]),
      Transform(rotation=(0,0.64018,0.76822,1.57),translation=(-1,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.25,.05))),
          geometry=Cylinder(height=1,radius=0.05))]),
      Transform(rotation=(0,0.70711,-0.70711,1),translation=(-1.9,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.25,.05))),
          geometry=Cylinder(height=.5,radius=0.04))]),
      #  Left Glove 
      Transform(rotation=(0,0,1,1.57),translation=(2.45,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Box(size=(0.5,0.5,0.25)))]),
      Transform(rotation=(0.95285,0,0.30345,1.57),translation=(2.75,1.5,0.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Cylinder(height=.25,radius=0.25))]),
      Transform(rotation=(0.96352,0,0.26764,1.57),translation=(2.55,1.85,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Cylinder(height=.15,radius=0.15))]),
      #  Right Glove 
      Transform(rotation=(0,0,1,1.57),translation=(-2.45,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Box(size=(0.5,0.5,0.25)))]),
      Transform(rotation=(-0.95285,0,0.30345,1.57),translation=(-2.75,1.5,0.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Cylinder(height=.25,radius=0.25))]),
      Transform(rotation=(-0.96352,0,0.26764,1.57),translation=(-2.55,1.85,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.039216,0.243137))),
          geometry=Cylinder(height=.15,radius=0.15))]),
      #  Buttons 
      Transform(translation=(0,1.7,.95),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(0,1.25,1.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      Transform(translation=(0,.8,1.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.1))]),
      #  Lower Body 
      Transform(translation=(0,-1,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(USE='PixelColors')),
          geometry=Sphere(radius=1.75))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PixelTextureSnowman.py")
