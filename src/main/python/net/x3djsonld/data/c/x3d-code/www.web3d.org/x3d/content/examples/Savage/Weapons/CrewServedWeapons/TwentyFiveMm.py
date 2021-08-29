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
    meta(content='TwentyFiveMm.x3d',name='title'),
    meta(content='A 25mm machine gun used on US Navy ships',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='14 January 2005',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='TwentyFiveMm.vzx',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/CrewServedWeapons/TwentyFiveMm.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='VizX3D, http://www.vivaty.com/downloads/studio',name='generator'),
    meta(content='Wings3D, http://www.wings3d.com',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(.44,.44,.44),
      children=[
      Group(DEF='twentyFiveMMGun',
        #  Deck base of 25mm gun 
        children=[
        Group(DEF='base',
          children=[
          Transform(DEF='basePlate',
            children=[
            Shape(
              geometry=Box(size=(2,.04,2)),
              appearance=Appearance(DEF='grey',
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(rotation=(0,1,0,.785),translation=(0,.1,0),
            children=[
            Shape(DEF='baseBracket',
              geometry=Box(size=(1.9,.2,.04)),
              appearance=Appearance(USE='grey'))]),
          Transform(rotation=(0,1,0,-.785),translation=(0,.1,0),
            children=[
            Shape(USE='baseBracket')]),
          Transform(translation=(0,.1,0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.2,radius=.5,top=False),
              appearance=Appearance(USE='grey'))]),
          Transform(translation=(0,.2,0),
            children=[
            Shape(
              geometry=Cylinder(height=.04,radius=.96),
              appearance=Appearance(USE='grey'))])]),
        Group(DEF='mainAssembly',
          children=[
          Group(DEF='rightAssembly',
            children=[
            Transform(translation=(0,.23,0),
              children=[
              Shape(
                geometry=Cylinder(height=.04,radius=.9),
                appearance=Appearance(DEF='lightGrey',
                  material=Material(ambientIntensity=.5,diffuseColor=(.8,.8,.8),shininess=.001)))]),
            Transform(translation=(0,1,0),
              children=[
              Shape(
                geometry=Cone(bottomRadius=.5),
                appearance=Appearance(USE='lightGrey'))]),
            #  Bolts to be used for detail 
            Transform(translation=(.7,.25,0),
              children=[
              Group(DEF='bolt',
                children=[
                Transform(),
                Shape(
                  appearance=Appearance(USE='lightGrey'),
                  geometry=Cylinder(height=.1,radius=.03)),
                Transform(translation=(0,.07,0),
                  children=[
                  Shape(
                    geometry=Box(size=(.03,.03,.03)),
                    appearance=Appearance(USE='lightGrey'))])])]),
            Transform(translation=(-.7,.25,0),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(0,.25,.7),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(0,.25,-.7),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(.5,.25,.5),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(-.5,.25,-.5),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(-.5,.25,.5),
              children=[
              Group(USE='bolt')]),
            Transform(translation=(.5,.25,-.5),
              children=[
              Group(USE='bolt')]),
            #  Four Support Braces 
            Transform(translation=(.2,1,0),
              children=[
              Group(DEF='supportBrace',
                children=[
                Shape(
                  geometry=Box(size=(.2,.4,.04)),
                  appearance=Appearance(USE='lightGrey'))])]),
            Transform(translation=(-.2,1,0),
              children=[
              Group(USE='supportBrace')]),
            Transform(rotation=(0,1,0,1.57),translation=(0,1,.2),
              children=[
              Group(USE='supportBrace')]),
            Transform(rotation=(0,1,0,1.57),translation=(0,1,-.2),
              children=[
              Group(USE='supportBrace')])]),
          #  Left Assembly 
          Transform(translation=(-.3,1.3,.3),
            children=[
            Group(DEF='leftAssembly',
              children=[
              Shape(
                geometry=Box(size=(1.3,.5,1.3)),
                appearance=Appearance(USE='lightGrey')),
              Transform(translation=(.25,.3,.2),
                children=[
                Shape(
                  geometry=Box(size=(.8,1,.9)),
                  appearance=Appearance(USE='lightGrey'))]),
              Transform(translation=(-.35,.5,.2),
                children=[
                Shape(
                  geometry=Box(size=(.6,1.2,.9)),
                  appearance=Appearance(USE='lightGrey'))]),
              Transform(translation=(-.35,.5,.6),
                children=[
                Shape(
                  geometry=Box(size=(.45,1,.2)),
                  appearance=Appearance(USE='lightGrey')),
                Transform(rotation=(1,0,0,1.57),translation=(-.15,.38,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(0,.42,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(0,-.42,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(-.15,-.38,.08),
                  children=[
                  Group(USE='bolt')])]),
              Transform(translation=(.25,.3,.6),
                children=[
                Shape(
                  geometry=Box(size=(.6,.8,.2)),
                  appearance=Appearance(USE='lightGrey')),
                Transform(rotation=(1,0,0,1.57),translation=(-.2,.23,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(-.2,-.23,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(-.05,.27,.08),
                  children=[
                  Group(USE='bolt')]),
                Transform(rotation=(1,0,0,1.57),translation=(-.05,-.27,.08),
                  children=[
                  Group(USE='bolt')])])])]),
          Transform(translation=(-.3,1,-.5),
            children=[
            Shape(
              geometry=Box(size=(1.3,1.1,.5)),
              appearance=Appearance(USE='lightGrey'))]),
          Transform(translation=(.15,1,-.75),
            children=[
            Shape(DEF='ammoSupport',
              geometry=Cylinder(height=1.1,radius=.03),
              appearance=Appearance(USE='lightGrey'))]),
          Transform(translation=(-.75,1,-.75),
            children=[
            Shape(USE='ammoSupport')]),
          Transform(translation=(-.3,1,-.75),
            children=[
            Shape(USE='ammoSupport')]),
          Transform(rotation=(1,0,0,1.57),translation=(.2,1.6,-.4),
            children=[
            Shape(
              geometry=Cylinder(height=1,radius=.25),
              appearance=Appearance(USE='lightGrey'))]),
          Transform(rotation=(1,0,0,1.57),translation=(.2,1.6,-.85),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.2,radius=.18,top=False),
              appearance=Appearance(USE='lightGrey'))])]),
        Transform(DEF='gun',translation=(1,-.6,-.3),
          children=[
          Group(DEF='gunAssembly',
            children=[
            Transform(rotation=(0,0,1,-1.57),translation=(0,3,0),
              children=[
              Shape(
                geometry=Cone(bottomRadius=.09,height=1.5),
                appearance=Appearance(DEF='steel',
                  material=Material(diffuseColor=(.3,.3,.3))))]),
            Transform(rotation=(0,0,1,1.57),translation=(.8,3,0),
              children=[
              Shape(
                geometry=Cylinder(radius=.04),
                appearance=Appearance(USE='steel'))]),
            Transform(rotation=(0,0,1,1.57),translation=(1.8,3,0),
              children=[
              Shape(
                geometry=Cylinder(height=.03,radius=.045),
                appearance=Appearance(USE='grey'))]),
            Transform(rotation=(0,0,1,1.57),translation=(1.8,3,0),
              children=[
              Shape(
                geometry=Cone(bottomRadius=.05,height=.5),
                appearance=Appearance(USE='grey'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-1.1,3,0),
              children=[
              Shape(
                geometry=Cylinder(height=.8,radius=.1),
                appearance=Appearance(USE='steel'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-1.1,3.1,-.08),
              children=[
              Shape(
                geometry=Cylinder(height=.6,radius=.05),
                appearance=Appearance(USE='steel'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-.2,3,0),
              children=[
              Shape(DEF='barrelCover',
                geometry=Cylinder(height=.08,radius=.3),
                appearance=Appearance(USE='lightGrey'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-1.4,3,0),
              children=[
              Shape(USE='barrelCover')]),
            Transform(translation=(-.8,3.275,0),
              children=[
              Shape(DEF='barrelPlate',
                geometry=Box(size=(1.2,.04,.11)),
                appearance=Appearance(USE='lightGrey'))]),
            Transform(translation=(-.8,2.745,0),
              children=[
              Shape(USE='barrelPlate')]),
            Transform(rotation=(1,0,0,.994),translation=(-.8,3.13,.24),
              children=[
              Shape(USE='barrelPlate')]),
            Transform(rotation=(1,0,0,-.994),translation=(-.8,3.13,-.24),
              children=[
              Shape(USE='barrelPlate')]),
            Transform(rotation=(1,0,0,2.2),translation=(-.8,2.828,.22),
              children=[
              Shape(USE='barrelPlate')]),
            Transform(rotation=(1,0,0,-2.2),translation=(-.8,2.828,-.22),
              children=[
              Shape(USE='barrelPlate')]),
            #  Trigger Assembly 
            Transform(rotation=(0,0,1,1.57),translation=(-1.45,3,0),
              children=[
              Shape(DEF='triggerCover',
                geometry=Cylinder(height=.05,radius=.4),
                appearance=Appearance(USE='lightGrey'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-1.7,3,0),
              children=[
              Shape(
                geometry=Cylinder(height=.7,radius=.2),
                appearance=Appearance(USE='steel'))]),
            Transform(translation=(-2.2,2.58,-.4),
              children=[
              Shape(
                geometry=Extrusion(crossSection=[(0,0),(0,.8),(.2,.7),(.2,.1),(0,0)],spine=[(0,0,0),(0,.05,0)]),
                appearance=Appearance(USE='lightGrey'))]),
            Transform(rotation=(1,0,0,3.14),translation=(-1.8,2.6,.3),
              children=[
              Shape(
                geometry=Extrusion(crossSection=[(0,0),(0,.7),(1,.7),(1,0),(0,0)],scale=[(.5,1),(1,1)],spine=[(0,0,0),(0,.5,0)]),
                appearance=Appearance(USE='lightGrey'))]),
            Transform(translation=(-1.6,2.8,0),
              children=[
              Shape(
                geometry=Cone(bottomRadius=.2,height=.5),
                appearance=Appearance(USE='steel'))]),
            Transform(translation=(-2,3,0),
              children=[
              Shape(
                geometry=Box(size=(.1,.8,.4)),
                appearance=Appearance(USE='steel'))]),
            Transform(rotation=(0,1,0,-.292),translation=(-2.1,3.2,-.15),
              children=[
              Group(DEF='shoulderBrace',
                children=[
                Transform(rotation=(0,0,1,1.57),translation=(-.12,0,0),
                  children=[
                  Shape(
                    geometry=Cylinder(height=.5,radius=.05),
                    appearance=Appearance(USE='lightGrey'))]),
                Transform(rotation=(0,0,1,1.57),translation=(-.22,0,0),
                  children=[
                  Shape(
                    geometry=Cylinder(height=.2,radius=.04),
                    appearance=Appearance(DEF='black',
                      material=Material(diffuseColor=(0.1,0.1,0.1))))]),
                Transform(scale=(1,4,4),translation=(-.18,0,0),
                  children=[
                  Shape(DEF='spring',
                    geometry=Sphere(radius=.02),
                    appearance=Appearance(USE='black'))]),
                Transform(scale=(1,4,4),translation=(-.16,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.20,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.22,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.24,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.26,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.28,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.3,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(scale=(1,4,4),translation=(-.32,0,0),
                  children=[
                  Shape(USE='spring')]),
                Transform(rotation=(0,0,1,1.57),scale=(.12,.12,.12),translation=(-.65,0,0),
                  children=[
                  Transform(rotation=(1,0,0,1.57),
                    children=[
                    Shape(DEF='brace',
                      geometry=Extrusion(convex=False,creaseAngle=3.14,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5),(.5,.5)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77)]),
                      appearance=Appearance(USE='lightGrey'))])])])]),
            Transform(rotation=(0,1,0,.292),translation=(-2.1,3.2,.15),
              children=[
              Group(USE='shoulderBrace')]),
            Transform(scale=(.85,.85,.85),translation=(-4.5,1.82,.25),
              children=[
              Group(DEF='handle',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(3,1,1),translation=(2.8,1.148,0),
                  #  Handle Sphere 
                  children=[
                  Shape(
                    geometry=Sphere(radius=.06),
                    appearance=Appearance(USE='black'))]),
                Transform(translation=(2.8,1.0,0),
                  children=[
                  Shape(DEF='handleMount',
                    geometry=Cone(bottomRadius=.1,height=.08),
                    appearance=Appearance(USE='lightGrey'))]),
                Transform(rotation=(0,0,1,3.14),translation=(2.8,1.3,0),
                  children=[
                  Shape(USE='handleMount')])])]),
            Transform(scale=(.85,.85,.85),translation=(-4.5,1.82,-.25),
              children=[
              Group(USE='handle')])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TwentyFiveMm.py")
