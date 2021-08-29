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
    meta(content='Helix.x3d',name='title'),
    meta(content='Michael Perry. Modified by Kevin Anderson',name='creator'),
    meta(content='25 September 2000',name='created'),
    meta(content='1 September 2015',name='modified'),
    meta(content='Soviet ASW Helicopter KA-27, NATO Name "Helix"',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/Helix.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(),
    #  Tail Boom 
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Extrusion(creaseAngle=2.0,crossSection=[(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1)],scale=[(.6,.6),(.5,.5),(.4,.4),(.3,.3),(.2,.2)],solid=False,spine=[(-2.3,.3,0),(-3,.3,0),(-4,.3,0),(-5,.3,0),(-6,.3,0)]))]),
    #  Horizontal Tail Plane 
    Transform(rotation=(1,0,0,1.571),scale=(1.0,1.95,.2),translation=(-5.65,.4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=1.0,radius=.4))]),
    Transform(scale=(.6,1.2,.1),translation=(-5.5,.3,1.1),
      children=[
      Shape(DEF='Rudder',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=.85))]),
    Transform(scale=(.6,1.2,.1),translation=(-5.5,.3,-1.1),
      children=[
      Shape(USE='Rudder')]),
    #  Aft Fuselage 
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Extrusion(creaseAngle=2.0,crossSection=[(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1)],scale=[(.1,.2),(.4,.5),(.62,.7),(.75,.82),(.85,.9),(.93,.95),(.97,.96),(.98,.98),(.99,.99),(1,1),(1,1)],solid=False,spine=[(-3.0,0,0),(-2.9,0,0),(-2.8,0,0),(-2.7,0,0),(-2.6,0,0),(-2.5,0,0),(-2.4,0,0),(-2.3,0,0),(-2.2,0,0),(-2.1,0,0),(-2,0,0)]))]),
    #  Fuselage 
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Extrusion(creaseAngle=2.0,crossSection=[(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0),(.92,-.38),(.71,-.71),(.38,-.92),(0,-1)],spine=[(3,0,0),(-2,0,0)]))]),
    #  Cabin Door 
    Transform(DEF='Cabin-Door',translation=(-1,.2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Box(size=(1.8,1.1,2)))]),
    Transform(translation=(2,.4,0),
      children=[
      Shape(DEF='Window',
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1),transparency=.25)),
        geometry=Box(size=(.4,.28,1.89)))]),
    Transform(translation=(.5,.4,0),
      children=[
      Shape(USE='Window')]),
    Transform(scale=(1,1,1.1),translation=(-.7,.4,0),
      children=[
      Shape(USE='Window')]),
    #  Landing Gear 
    Transform(center=(0,1,0),rotation=(1,0,0,-.959),translation=(.7,-.5,0),
      children=[
      Shape(DEF='Gear',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=2.5,radius=.05))]),
    Transform(center=(0,1,0),rotation=(1,0,0,.959),translation=(.7,-.5,0),
      children=[
      Shape(USE='Gear')]),
    Transform(rotation=(1,0,0,1.571),translation=(.7,-.85,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=3.5,radius=.05))]),
    Transform(translation=(.7,-.87,1.8),
      children=[
      Shape(DEF='strut',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=.4,radius=.05))]),
    Transform(translation=(.7,-.87,-1.8),
      children=[
      Shape(USE='strut')]),
    Transform(translation=(2.6,-1.1,0),
      children=[
      Shape(USE='strut')]),
    Transform(scale=(1,1,.35),translation=(2.5,-1.3,0),
      children=[
      Shape(DEF='wheel',
        appearance=Appearance(DEF='Black',
          material=Material(diffuseColor=(0,0,0))),
        geometry=Sphere(radius=.26))]),
    Transform(scale=(1,1,.35),translation=(.7,-1.1,1.85),
      children=[
      Shape(USE='wheel')]),
    Transform(scale=(1,1,.35),translation=(.7,-1.1,-1.85),
      children=[
      Shape(USE='wheel')]),
    #  Flotation Gear 
    Transform(translation=(1.5,-.2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Box(size=(1,.5,2)))]),
    #  Mast 
    Transform(translation=(0,1.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(radius=.08)),
      Transform(translation=(0,1.5,0),
        children=[
        Group(DEF='Rotor-Blades',
          children=[
          Transform(rotation=(0,1,0,-1.0472),
            children=[
            Transform(center=(0,-3.25,0),rotation=(1,0,0,-1.571),scale=(3.5,1,.35),translation=(0,2.65,0),
              children=[
              Shape(DEF='Blade',
                appearance=Appearance(
                  material=Material(ambientIntensity=.2,diffuseColor=(.3,.3,.5),shininess=.1,specularColor=(.6,.6,.7))),
                geometry=Cylinder(height=6.5,radius=.1))])]),
          Transform(rotation=(0,1,0,1.0472),
            children=[
            Transform(center=(0,-3.25,0),rotation=(1,0,0,-1.571),scale=(3.5,1,.5),translation=(0,2.65,0),
              children=[
              Shape(USE='Blade')])]),
          Transform(center=(0,-3.25,0),rotation=(1,0,0,1.571),scale=(3.5,1,.5),translation=(0,2.65,0),
            children=[
            Shape(USE='Blade')])])]),
      Transform(rotation=(0,1,0,1.0472),translation=(0,.75,0),
        children=[
        Group(USE='Rotor-Blades')])]),
    #  Engine Cowling 
    Transform(scale=(2.5,.7,.7),translation=(0,.991,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=.75))]),
    #  The engines 
    Transform(rotation=(0,0,1,-1.571),translation=(1.3,1.0,.3),
      children=[
      Shape(DEF='Engine',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Cylinder(height=2.5,radius=.2,top=False))]),
    Transform(rotation=(0,0,1,-1.571),translation=(1.3,1.0,-.3),
      children=[
      Shape(USE='Engine')]),
    #  Engine Intake 
    Transform(rotation=(0,0,1,-1.571),translation=(2.6,1.0,.3),
      children=[
      Shape(DEF='Intake',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Cone(bottomRadius=.2,height=.3))]),
    Transform(rotation=(0,0,1,-1.571),translation=(2.6,1.0,-.3),
      children=[
      Shape(USE='Intake')]),
    Transform(rotation=(1,0,0,1.578),translation=(.5,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Cylinder(height=1.5,radius=.21))]),
    #  Nose section 
    Transform(translation=(3,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Extrusion(creaseAngle=2.0,crossSection=[(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1)],scale=[(.2,.2),(.43,.5),(.6,.7),(.72,.82),(.79,.9),(.84,.95),(.92,.96),(.96,.98),(.99,.99),(1,1),(1,1)],spine=[(1,0,0),(.9,0,0),(.8,0,0),(.7,0,0),(.6,0,0),(.5,0,0),(.4,0,0),(.3,0,0),(.2,0,0),(.1,0,0),(0,0,0)]))]),
    #  Radome 
    Transform(translation=(3.5,-.6,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))),
        geometry=Sphere(radius=.48))]),
    #  Cockpit 
    Transform(translation=(3,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1),transparency=.25)),
        geometry=Extrusion(creaseAngle=2.0,crossSection=[(0,-1),(.38,-.92),(.71,-.71),(.92,-.38),(1,0),(.92,.38),(.71,.71),(.38,.92),(0,1)],scale=[(.1,.2),(.22,.5),(.36,.7),(.5,.82),(.62,.9),(.74,.95),(.84,.96),(.94,.98),(.98,.99),(1.0,1.0),(1.0,1.0)],solid=False,spine=[(1,0,0),(.9,0,0),(.8,0,0),(.7,0,0),(.6,0,0),(.5,0,0),(.4,0,0),(.3,0,0),(.2,0,0),(.1,0,0),(0,0,0)]))]),
    #  Side Number 
    Transform(rotation=(0,1,0,.1745),translation=(1,.8,.7),
      children=[
      Shape(DEF='Number',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,0,0))),
        geometry=Text(string=["44"],
          fontStyle=FontStyle(size=.7,style_='BOLD')))]),
    Transform(rotation=(0,1,0,-3.316),translation=(1.5,.8,-.7),
      children=[
      Shape(USE='Number')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Helix.py")
