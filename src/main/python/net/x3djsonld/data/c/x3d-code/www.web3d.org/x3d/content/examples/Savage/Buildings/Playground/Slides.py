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
    meta(content='Slides.x3d',name='title'),
    meta(content='Slides for the playground, with design based on site survey.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Slides.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Group(
        children=[
        Transform(translation=(2,1,-5.5),
          children=[
          Transform(rotation=(0,1,0,3.1415),
            children=[
            Shape(DEF='SPRIAL',
              appearance=Appearance(
                material=Material(diffuseColor=(0.05,0.95,0.05),emissiveColor=(0.1,0.1,0.1),shininess=0.8,specularColor=(0.1,0.1,0.1))),
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,solid=False,spine=[(2,0,0),(1.85,0.16,-0.77),(1.41,0.32,-1.41),(0.77,0.48,-1.85),(0,0.64,-2),(-0.77,0.8,-1.85),(-1.41,0.96,-1.41),(-1.85,1.12,-0.77),(-2,1.28,0),(-1.85,1.44,0.77),(-1.41,1.6,1.41),(-0.77,1.76,1.85),(0,1.92,2),(0.77,2.08,1.85),(1.41,2.24,1.41),(1.85,2.4,0.77),(2,2.56,0),(1.85,2.72,-0.77),(1.41,2.88,-1.41),(0.77,3.04,-1.85),(0,3.2,-2),(-0.77,3.36,-1.85),(-1.41,3.52,-1.41),(-1.85,3.68,-0.77),(-2,3.84,0),(-1.85,4,0.77),(-1.41,4.16,1.41),(-0.77,4.32,1.85),(0,4.48,2),(0.77,4.64,1.85),(1.41,4.8,1.41),(1.85,4.96,0.77),(2,5.12,0),(2,5.13,-0.06),(2,5.14,-0.13),(2,5.15,-0.21),(2,5.16,-0.29),(2,5.17,-0.38),(2,5.18,-0.48),(2,5.28,-3.48)]))])]),
        Transform(
          children=[
          Transform(translation=(-2,0,0),
            children=[
            Shape(DEF='STRAIGHT',
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0),emissiveColor=(0.1,0.1,0.1))),
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,solid=False,spine=[(0,6,0),(-1,6,0),(-2.5,5,0),(-4.0,2.5,0),(-5.5,1,0),(-6,1,0),(-7,1,0)]))])]),
        Transform(),]),
      Transform(),]),
    Transform(
      children=[
      Group(
        children=[
        Transform(translation=(1,2.75,1),
          children=[
          Shape(DEF='PILLAR',
            geometry=Cylinder(height=5.5,radius=0.1),
            appearance=Appearance(DEF='PILLARApp',
              material=Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.218111,0.),shininess=0.030612,specularColor=(0.540816,0.480233,0))))]),
        Transform(translation=(1,2.75,-1),
          children=[
          Shape(USE='PILLAR')]),
        Transform(translation=(-1,2.75,1),
          children=[
          Shape(USE='PILLAR')]),
        Transform(translation=(-1,2.75,-1),
          children=[
          Shape(USE='PILLAR')]),
        Transform(translation=(0,2.3,0),
          children=[
          Shape(
            geometry=Box(size=(2.1,0.2,2.1)),
            appearance=Appearance(USE='PILLARApp'))]),
        Transform(translation=(0,0,1),
          children=[
          Group(DEF='TOWERBar',
            children=[
            Transform(translation=(0,3.7,0),
              children=[
              Transform(rotation=(0,0,1,1.575),
                children=[
                Shape(
                  geometry=Cylinder(radius=0.04),
                  appearance=Appearance(DEF='TOWERApp',
                    material=Material(diffuseColor=(0.1,0.1,0.95))))])])])]),
        Transform(translation=(0,0,-1),
          children=[
          Group(USE='TOWERBar')]),
        Transform(
          children=[
          Transform(rotation=(0,1,0,1.575),translation=(1,0,0),
            children=[
            Transform(center=(1,3.7,0),scale=(1,1.5,1),
              children=[
              Group(USE='TOWERBar')])]),
          Transform(
            children=[
            Transform(rotation=(0,0,1,1.575),translation=(1.25,3.7,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.5,radius=0.05),
                appearance=Appearance(USE='TOWERApp'))])])]),
        Transform(
          children=[
          Transform(translation=(1.5,1.875,0),
            children=[
            Shape(
              geometry=Cylinder(height=3.75,radius=0.05),
              appearance=Appearance(USE='TOWERApp'))])]),
        Transform(rotation=(0,1,0,1.575),translation=(-1,0,0),
          children=[
          Group(USE='TOWERBar')]),
        Transform(
          children=[
          Transform(
            children=[
            Group(DEF='TOWERLadder',
              children=[
              Transform(
                children=[
                Transform(translation=(0.2,1.15,1),
                  children=[
                  Shape(DEF='TOWERLadderBar',
                    geometry=Cylinder(height=2.3,radius=0.04),
                    appearance=Appearance(USE='PILLARApp'))])]),
              Transform(translation=(-0.2,1.15,1),
                children=[
                Shape(USE='TOWERLadderBar')]),
              Transform(
                children=[
                Group(DEF='LadderCrossBar',
                  children=[
                  Transform(rotation=(0,0,1,1.575),translation=(0,.3,1),
                    children=[
                    Shape(
                      geometry=Cylinder(height=0.4,radius=0.03),
                      appearance=Appearance(USE='PILLARApp'))])])]),
              Transform(translation=(0,0.3,0),
                children=[
                Group(USE='LadderCrossBar')]),
              Transform(translation=(0,0.6,0),
                children=[
                Group(USE='LadderCrossBar')]),
              Transform(translation=(0,0.9,0),
                children=[
                Group(USE='LadderCrossBar')]),
              Transform(translation=(0,1.2,0),
                children=[
                Group(USE='LadderCrossBar')]),
              Transform(translation=(0,1.5,0),
                children=[
                Group(USE='LadderCrossBar')]),
              Transform(translation=(0,1.8,0),
                children=[
                Group(USE='LadderCrossBar')])])])]),
        Transform(translation=(0,5.75,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=2,height=0.5),
            appearance=Appearance(USE='TOWERApp'))]),
        Transform(
          children=[
          Transform(),]),
        Transform(
          children=[
          Transform(),]),
        Transform(
          children=[
          Transform(),])])]),
    Transform(
      children=[
      Group(DEF='SIDEPANEL',
        children=[
        Transform(translation=(-0.8,3.05,1),
          children=[
          Shape(DEF='SIDEBAR',
            geometry=Cylinder(height=1.3,radius=0.01),
            appearance=Appearance(USE='TOWERApp'))]),
        Transform(translation=(-0.7,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(-0.6,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(-0.5,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(0.8,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(0.7,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(0.6,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(translation=(0.5,3.05,1),
          children=[
          Shape(USE='SIDEBAR')]),
        Transform(),
        Transform(),
        Transform(),])]),
    Transform(rotation=(0,1,0,1.575),
      children=[
      Group(USE='SIDEPANEL')]),
    Transform(rotation=(0,1,0,3.141),
      children=[
      Group(USE='SIDEPANEL')]),
    Transform(rotation=(0,1,0,-1.575),
      children=[
      Group(USE='SIDEPANEL')]),
    Transform(),
    Transform(),
    Transform(),
    Transform(),
    Viewpoint(description='Slides Tower',position=(0,4.5,11))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Slides.py")
