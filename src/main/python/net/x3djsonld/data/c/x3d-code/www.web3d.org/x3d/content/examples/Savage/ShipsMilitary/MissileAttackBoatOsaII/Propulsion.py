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
    meta(content='Propulsion.x3d',name='title'),
    meta(content='Model of OSA-II missile boat external propulsion system.',name='description'),
    meta(content='modified for use by Scott Rosetti, LT USNR',name='creator'),
    meta(content='20 July 2003',name='created'),
    meta(content='21 November 2015',name='modified'),
    meta(content='LT James Harney, USN',name='orginalContentAuthor'),
    meta(content='Osa-II, missile boat, patrol craft, SAVAGE, X3D, propulsion',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/MissileAttackBoatOsaII/Propulsion.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(scale=(.05,.08,.08),translation=(-4.2,0,-.65),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Transform(rotation=(1,0,0,-1.68),
            children=[
            Transform(DEF='STBDSHAFT',scale=(.25,.25,.25),translation=(4,0,0),
              children=[
              Group(DEF='PROP',
                children=[
                Transform(DEF='HUB',
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='BRASS',diffuseColor=(1,.9,.3),shininess=1.0,specularColor=(1,.9,.3))),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.0,-3.29)]))]),
                Transform(DEF='BASE',
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='BRASS')),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],scale=[(1.0,1.0),(.8,.8),(.4,.4),(.4,.4)],solid=False,spine=[(0.0,0.0,0.1),(0.0,0.0,1.14),(0.0,0.0,1.56),(0.0,0.0,1.66)]))]),
                Transform(rotation=(1,0,0,-1.64),
                  children=[
                  Group(DEF='BLADE',
                    children=[
                    Transform(rotation=(0,0,1,-.349),scale=(1,.1,1),translation=(-2,2.25,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='BRASS')),
                        geometry=Extrusion(creaseAngle=1.1,crossSection=[(2,.2),(1.95,.5),(1.9,1),(1.95,1.5),(2,2),(2.1,1.5),(2.1,3),(2,3.5),(1.75,4),(1.65,4.5),(.5,4.85),(.4,5),(.5,5.4),(1,5.6),(1.5,5.9),(2,6),(2.5,6.05),(3,6.05),(3.5,6.05),(4,6.05),(4.5,6),(5,5.95),(5.5,5.6),(5.6,5.5),(6,5.25),(6.5,5),(6.8,4.5),(7.1,4),(7.4,3.5),(7.45,3),(7.4,2.5),(7.15,2),(7,1.5),(6.5,1.25),(6,1),(5.5,.95),(5,.925),(4.5,.85),(4,.55),(4,.45),(3.5,.46),(3,.5),(2.5,.46),(2,.2)]))])])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,1.36),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,2.72),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,4.08),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,5.44),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='RED',diffuseColor=(.5,0,0),shininess=1.0,specularColor=(.5,0,0))),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],solid=False,spine=[(0.0,0.0,-3.3),(0.0,0.0,-125.58)]))])])]),
            Transform(DEF='PORTSHAFT',scale=(.25,.25,.25),translation=(-4,0,0),
              children=[
              Group(
                children=[
                Transform(USE='HUB'),
                Transform(USE='BASE'),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='RED')),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],solid=False,spine=[(0.0,0.0,-3.3),(0.0,0.0,-125.58)]))]),
                Group(
                  children=[
                  Transform(translation=(0,0,-2.5),
                    children=[
                    Transform(rotation=(1,0,0,1.64),
                      children=[
                      Group(USE='BLADE')]),
                    Transform(rotation=(1,0,0,1.64),
                      #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                      children=[
                      Transform(rotation=(0,1,0,1.36),
                        children=[
                        Group(USE='BLADE')])]),
                    Transform(rotation=(1,0,0,1.64),
                      #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                      children=[
                      Transform(rotation=(0,1,0,2.72),
                        children=[
                        Group(USE='BLADE')])]),
                    Transform(rotation=(1,0,0,1.64),
                      #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                      children=[
                      Transform(rotation=(0,1,0,4.08),
                        children=[
                        Group(USE='BLADE')])]),
                    Transform(rotation=(1,0,0,1.64),
                      #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                      children=[
                      Transform(rotation=(0,1,0,5.44),
                        children=[
                        Group(USE='BLADE')])])])])])]),
            TimeSensor(DEF='MyClock',cycleInterval=2,loop=True),
            OrientationInterpolator(DEF='MyOI',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,3.14),(0,0,1,6.28)]),
            ROUTE(fromField='fraction_changed',fromNode='MyClock',toField='set_fraction',toNode='MyOI'),
            ROUTE(fromField='value_changed',fromNode='MyOI',toField='set_rotation',toNode='PORTSHAFT'),
            OrientationInterpolator(DEF='OI2',key=[0,0.5,1],keyValue=[(0,0,1,6.28),(0,0,1,3.14),(0,0,1,0)]),
            ROUTE(fromField='fraction_changed',fromNode='MyClock',toField='set_fraction',toNode='OI2'),
            ROUTE(fromField='value_changed',fromNode='OI2',toField='set_rotation',toNode='STBDSHAFT'),
            Transform(DEF='CENTERSHAFT',scale=(.25,.25,.25),
              children=[
              Group(
                children=[
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,.9,.3),shininess=1.0,specularColor=(1,.9,.3))),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.0,-3.29)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='BRASS')),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],scale=[(1.0,1.0),(.8,.8),(.4,.4),(.4,.4)],solid=False,spine=[(0.0,0.0,0.1),(0.0,0.0,1.14),(0.0,0.0,1.56),(0.0,0.0,1.66)]))]),
                Transform(rotation=(1,0,0,-1.64),
                  children=[
                  Group(
                    children=[
                    Transform(rotation=(0,0,1,-.349),scale=(1,.1,1),translation=(-2,2.25,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='BRASS')),
                        geometry=Extrusion(creaseAngle=1.1,crossSection=[(2,.2),(1.95,.5),(1.9,1),(1.95,1.5),(2,2),(2.1,1.5),(2.1,3),(2,3.5),(1.75,4),(1.65,4.5),(.5,4.85),(.4,5),(.5,5.4),(1,5.6),(1.5,5.9),(2,6),(2.5,6.05),(3,6.05),(3.5,6.05),(4,6.05),(4.5,6),(5,5.95),(5.5,5.6),(5.6,5.5),(6,5.25),(6.5,5),(6.8,4.5),(7.1,4),(7.4,3.5),(7.45,3),(7.4,2.5),(7.15,2),(7,1.5),(6.5,1.25),(6,1),(5.5,.95),(5,.925),(4.5,.85),(4,.55),(4,.45),(3.5,.46),(3,.5),(2.5,.46),(2,.2)]))])])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,1.36),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,2.72),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,4.08),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(rotation=(1,0,0,-1.64),
                  #  Approx 72 degrees of sep between the center of each blade as it touches the hub 
                  children=[
                  Transform(rotation=(0,1,0,5.44),
                    children=[
                    Group(USE='BLADE')])]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(.5,0,0),shininess=1.0,specularColor=(.5,0,0))),
                    geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],solid=False,spine=[(0.0,0.0,-3.3),(0.0,0.0,-125.58)]))])])]),
            OrientationInterpolator(DEF='OI3',key=[0,.5,1],keyValue=[(0,0,1,6.28),(0,0,1,3.14),(0,0,1,0)]),
            ROUTE(fromField='fraction_changed',fromNode='MyClock',toField='set_fraction',toNode='OI3'),
            ROUTE(fromField='value_changed',fromNode='OI3',toField='set_rotation',toNode='CENTERSHAFT')])]),
        Transform(translation=(6,4,.5),
          children=[
          Transform(rotation=(0,1,0,-.11),
            children=[
            Transform(rotation=(0,0,1,-1.57),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))),
                geometry=Cylinder(height=3.5,radius=.5))]),
            Transform(translation=(-1.6,0,1.5),
              children=[
              Transform(rotation=(0,0,1,-1.57),scale=(40,3,8),
                children=[
                Transform(rotation=(1,0,0,-1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0))),
                    geometry=Extrusion(creaseAngle=1.5,crossSection=[(.01,.2),(-.01,.2),(-.012,.05),(-.01,-.1),(-.008,-.15),(-.005,-.17),(0,-.2),(.005,-.17),(.008,-.15),(.01,-.1),(.012,.05),(.01,.2)],scale=[(1,1),(1,1)],solid=False,spine=[(0,0,0),(0,0,1)]))])])])])]),
        Transform(translation=(6,0,.5),
          children=[
          Transform(rotation=(0,1,0,-.11),
            children=[
            Transform(rotation=(0,0,1,-1.57),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))),
                geometry=Cylinder(height=3.5,radius=.5))]),
            Transform(translation=(-1.6,0,1.5),
              children=[
              Transform(rotation=(0,0,1,-1.57),scale=(40,3,8),
                children=[
                Transform(rotation=(1,0,0,-1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0))),
                    geometry=Extrusion(creaseAngle=1.5,crossSection=[(.01,.2),(-.01,.2),(-.012,.05),(-.01,-.1),(-.008,-.15),(-.005,-.17),(0,-.2),(.005,-.17),(.008,-.15),(.01,-.1),(.012,.05),(.01,.2)],scale=[(1,1),(1,1)],solid=False,spine=[(0,0,0),(0,0,1)]))])])])])]),
        Transform(translation=(6,-4,.5),
          children=[
          Transform(rotation=(0,1,0,-.11),
            children=[
            Transform(rotation=(0,0,1,-1.57),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))),
                geometry=Cylinder(height=3.5,radius=.5))]),
            Transform(translation=(-1.6,0,1.5),
              children=[
              Transform(rotation=(0,0,1,-1.57),scale=(40,3,8),
                children=[
                Transform(rotation=(1,0,0,-1.57),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0))),
                    geometry=Extrusion(creaseAngle=1.5,crossSection=[(.01,.2),(-.01,.2),(-.012,.05),(-.01,-.1),(-.008,-.15),(-.005,-.17),(0,-.2),(.005,-.17),(.008,-.15),(.01,-.1),(.012,.05),(.01,.2)],scale=[(1,1),(1,1)],solid=False,spine=[(0,0,0),(0,0,1)]))])])])])])]
        #  3-shaft propulsion system to include shafts, propellers, and struts. Basis for shafts and propellers taken from James Harney DDG model (see reference). 
        )]),
    Transform(rotation=(0,1,0,-1.9),
      children=[
      Viewpoint(description='Propellers',orientation=(0,0,1,1.57))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Propulsion.py")
