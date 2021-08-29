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
    meta(content='RifledRecoilingMortar120mm.x3d',name='title'),
    meta(content='Rifled Recoiling Mortar, 120mm This mortar is a proposed candidate for the Marine Corps Expeditionary Fire Support System. The EFSS will replace the 105mm light howitzer.',name='description'),
    meta(content='William W. Yates',name='creator'),
    meta(content='24 July 2003',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='dragonf.jpg',name='photograph'),
    meta(content='http://www.hqmc.usmc.mil/marines.nsf/0/dcee8726af76db7f852565a100785b36/$FILE/Urbanw1.jpg',name='reference'),
    meta(content='http://www.dtic.mil/ndia/44fuze/rockets.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/docs/000519-covington-mortar.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Guns/RifledRecoilingMortar120mm.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(DEF='Lower_Traverse_Plate',translation=(0,-.2,0),
        children=[
        Shape(
          geometry=Cylinder(height=.2,radius=2),
          appearance=Appearance(
            material=Material(diffuseColor=(.4,.6,.1),emissiveColor=(0,0,.1),shininess=.2)))]),
      Transform(DEF='Main_Chassis',translation=(-.1,-.8,0),
        children=[
        Shape(
          geometry=Box(size=(4.0,1,4.2)),
          appearance=Appearance(
            material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2))),
        Transform(DEF='Front_Chassis',translation=(5.1,0.0,0),
          children=[
          Shape(
            geometry=Box(size=(6.4,1,1.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2))),
          Transform(DEF='Front_Stake_Plate',rotation=(0,0,1,-1.5707),translation=(3.20,0,0),
            children=[
            Transform(translation=(-.4,0,.4),
              children=[
              Shape(
                geometry=Extrusion(crossSection=[(0.0,0.0),(0.7,0.0),(0.7,-0.85),(0.0,0.0)],solid=False,spine=[(0,0,0),(0,0,0.2)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
            Transform(rotation=(0,0,1,1.5707),scale=(.3,.3,.3),translation=(0.5,0.40,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)),
                geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(1.5,0.0),(1.5,2),(-1.5,2),(-1.5,-2),(1.5,-2),(1.5,0.0)],solid=False,spine=[(0,0,0),(0,.7,0)]))]),
            Transform(translation=(-.4,0,-0.6),
              children=[
              Shape(
                geometry=Extrusion(crossSection=[(0.0,0.0),(0.7,0.0),(0.7,-0.85),(0.0,0.0)],solid=False,spine=[(0,0,0),(0,0,0.2)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])]),
          Transform(DEF='Battery_Carrier',translation=(1,-.4,1.2),
            children=[
            Shape(
              geometry=Box(size=(3,.2,1.2)),
              appearance=Appearance(
                material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2))),
            Transform(translation=(-.7,.6,0),
              children=[
              Group(DEF='BATTERY',
                children=[
                Transform(
                  children=[
                  Shape(DEF='BATTERY_BODY',
                    geometry=Box(size=(1.2,1,1)),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.5,.5,.5))))]),
                Transform(translation=(0.4,0.7,-0.2),
                  children=[
                  Shape(DEF='TERMINAL_POST',
                    geometry=Cylinder(height=.15,radius=.08),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
                Transform(translation=(-.4,.7,-0.2),
                  children=[
                  Shape(USE='TERMINAL_POST')]),
                Transform(translation=(0,.6,0),
                  children=[
                  Shape(DEF='BATTERY_TOP',
                    geometry=Box(size=(1.2,.2,1)),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.1,.1,.1))))])])]),
            Transform(translation=(.7,.6,0),
              children=[
              Group(USE='BATTERY')]),
            Transform(translation=(-1.5,0.1,-.6),
              children=[
              Shape(DEF='BATTERY_CASE_WALL',
                geometry=Extrusion(crossSection=[(0,0),(.1,0),(.1,1.1),(2.9,1.1),(2.9,0),(3,0),(3,1.2),(0,1.2),(0,0)],solid=False,spine=[(0,0,0),(0,.6,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])]),
          Transform(DEF='Lunette_Assembly',
            children=[
            Transform(translation=(2.30,0.5,.4),
              children=[
              Shape(DEF='L_lunette_bracket',
                geometry=Extrusion(crossSection=[(0.0,0.0),(0.7,0.0),(0.7,-0.7),(0.0,0.0)],solid=False,spine=[(0,0,0),(0,0,0.2)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
            Transform(translation=(2.30,0.5,-0.6),
              children=[
              Shape(DEF='R_lunette_bracket',
                geometry=Extrusion(crossSection=[(0.0,0.0),(0.7,0.0),(0.7,-0.7),(0.0,0.0)],solid=False,spine=[(0,0,0),(0,0,0.2)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
            Transform(translation=(3.1,.8,0),
              children=[
              Shape(DEF='Lunette_bracket_front_Plate',
                geometry=Box(size=(.2,.8,1.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
            Transform(scale=(.15,.15,.15),translation=(4.5,1,0),
              children=[
              Shape(DEF='Lunette',
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
            Transform(rotation=(0,0,1,1.57),scale=(.15,.15,.15),translation=(3.6,1,0),
              children=[
              Shape(DEF='Lunette_Bar',
                geometry=Cylinder(height=8),
                appearance=Appearance(
                  material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))])]),
          Transform(rotation=(1,0,0,-1.57070),translation=(-.4,-.50,-.6),
            children=[
            Shape(
              geometry=Extrusion(crossSection=[(0,0),(2.5,0),(2.5,1.5),(1,2.5),(0,2.5),(0,0)],solid=False,spine=[(0,0,0),(0,1.2,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])]),
        Transform(DEF='TRAILS',
          children=[
          Transform(DEF='Right_Trail_Bracket',translation=(.1,.8,0),
            children=[
            Transform(DEF='Bottom_trail_bracket',translation=(-2.1,-1.3,2.1),
              children=[
              Shape(DEF='TRAIL_MOUNT_BRACKET',
                geometry=Extrusion(crossSection=[(0,0),(0.6,0.0),(0.6,0.6),(-0.6,0.6),(0,0)],solid=False,spine=[(0,0,0),(0,0.1,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
            Transform(DEF='Top_trail_bracket',translation=(-2.1,-.6,2.1),
              children=[
              Shape(USE='TRAIL_MOUNT_BRACKET')]),
            Transform(translation=(-2.1,-1.2,2.1),
              children=[
              Shape(DEF='TRAIL_BRACKET_SIDE',
                geometry=Extrusion(crossSection=[(0.0,0.0),(0.1,0.0),(-0.5,0.6),(-0.6,0.6),(0.0,0.0)],solid=False,spine=[(0,0,0),(0,.7,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])]),
          Transform(DEF='Left_Trail_Bracket',rotation=(1,0,0,3.14159),translation=(.1,-1,-4.2),
            children=[
            Transform(DEF='Left_Bottom_trail_bracket',translation=(-2.1,-1.3,-2.1),
              children=[
              Shape(USE='TRAIL_MOUNT_BRACKET')]),
            Transform(DEF='Left_top_trail_bracket',translation=(-2.1,-.6,-2.1),
              children=[
              Shape(USE='TRAIL_MOUNT_BRACKET')]),
            Transform(translation=(-2.1,-1.2,-2.1),
              children=[
              Shape(USE='TRAIL_BRACKET_SIDE')])]),
          Transform(translation=(0,-.1,-2.4),
            children=[
            CylinderSensor(DEF='Left_Trail_Pivot_Sensor',description='Extends and closes left trail',maxAngle=2.356),
            Transform(DEF='Left_Trail',translation=(-1.75,0,0),
              children=[
              Transform(translation=(1.45,0,0),
                children=[
                Shape(
                  geometry=Box(size=(3,.6,.6)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(
                children=[
                Shape(
                  geometry=Cylinder(height=.6,radius=.3),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(rotation=(1,0,0,3.1415),translation=(2.95,-.25,-.2),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(0,0),(0,.55),(.77,0),(0,0)],spine=[(0,0,0),(0,0,.1)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(rotation=(1,0,0,3.1415),translation=(2.95,-.25,.3),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(0,0),(0,.55),(.77,0),(0,0)],spine=[(0,0,0),(0,0,.1)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(rotation=(0,1,0,1.57),scale=(.25,.25,.25),translation=(3.3,-.3,0),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(1.2,0.0),(1.2,1.7),(-1.2,1.7),(-1.2,-1.7),(1.2,-1.7),(1.2,0.0)],solid=False,spine=[(0,0,0),(0,.2,0)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              ROUTE(fromField='rotation_changed',fromNode='Left_Trail_Pivot_Sensor',toField='set_rotation',toNode='Left_Trail')])]),
          Transform(translation=(0,-0.1,2.4),
            children=[
            CylinderSensor(DEF='Right_Trail_Pivot_Sensor',description='Extends and closes the right trail.',maxAngle=0,minAngle=-2.356),
            Transform(DEF='Right_Trail',translation=(-1.75,0,0),
              children=[
              Transform(translation=(1.45,0,0),
                children=[
                Shape(
                  geometry=Box(size=(3,.6,.6)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(
                children=[
                Shape(
                  geometry=Cylinder(height=.6,radius=.3),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(rotation=(1,0,0,3.1415),translation=(2.95,-.25,.3),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(0,0),(0,.55),(.77,0),(0,0)],spine=[(0,0,0),(0,0,.1)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(rotation=(1,0,0,3.1415),translation=(2.95,-.25,-.2),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(0,0),(0,.55),(.77,0),(0,0)],spine=[(0,0,0),(0,0,.1)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              Transform(DEF='Trail_Stake_Plate',rotation=(0,1,0,1.57),scale=(.25,.25,.25),translation=(3.3,-.3,0),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(1.2,0.0),(1.2,1.7),(-1.2,1.7),(-1.2,-1.7),(1.2,-1.7),(1.2,0.0)],solid=False,spine=[(0,0,0),(0,.2,0)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))]),
              ROUTE(fromField='rotation_changed',fromNode='Right_Trail_Pivot_Sensor',toField='set_rotation',toNode='Right_Trail')])])])]),
      Group(
        children=[
        Transform(DEF='Traversing_Assembly',
          children=[
          CylinderSensor(DEF='Traversing_Sensor',description='Traverses the tube left and right',maxAngle=.9,minAngle=-.9),
          Transform(DEF='Transform_B',
            children=[
            Transform(DEF='Elevating_Assemblies',rotation=(1,0,0,1.570),translation=(-.8,0.8,0),
              children=[
              CylinderSensor(DEF='FIRST_CYLINDERSENSOR',description='Elevates and depresses the tube',diskAngle=0,maxAngle=1.3,minAngle=.25,offset=1.57),
              Transform(DEF='FIRST_TRANSFORM',
                children=[
                Transform(rotation=(1,0,0,-1.57),translation=(.8,0,.8),
                  children=[
                  Transform(rotation=(1,0,0,3.14159),translation=(3.4,.8,0.1),
                    children=[
                    Transform(DEF='Tube_Assembly',rotation=(0,0,1,1.57),scale=(.165,4.5,.165),
                      children=[
                      Shape(DEF='tube',
                        geometry=Extrusion(creaseAngle=1.57,crossSection=[(-1.00,0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,0.00)],solid=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
                        appearance=Appearance(
                          material=Material(diffuseColor=(.3,.3,.3),emissiveColor=(.1,.1,.1),shininess=.3)))])]),
                  Transform(DEF='Shroud_Top_Plate',rotation=(0,0,1,1.5707),scale=(.4,.4,.4),translation=(5.2,.8,0.1),
                    children=[
                    Shape(
                      geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(1.2,0.0),(1.2,1.7),(-1.2,1.7),(-1.2,-1.7),(1.2,-1.7),(1.2,0.0)],solid=False,spine=[(0,0,0),(0,.2,0)]),
                      appearance=Appearance(
                        material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
                  Transform(DEF='Elevation_Pivot_Base',rotation=(1,0,0,1.57),translation=(-.8,0.8,0.1),
                    children=[
                    Shape(
                      geometry=Cylinder(height=1.7,radius=.6),
                      appearance=Appearance(
                        material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
                  Transform(DEF='Shroud',rotation=(1,0,0,1.57),scale=(2,.85,1.2),translation=(-.80,1.4,.1),
                    children=[
                    Shape(
                      geometry=Extrusion(crossSection=[(0.0,0.0),(-1,0),(-1,1),(1,1),(1,0),(0,0),(0,.1),(.8,.1),(.8,.9),(-.8,.9),(-.8,.1),(0,.1)],solid=False,spine=[(0.0,0.0,0.0),(3.0,0,0)]),
                      appearance=Appearance(
                        material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
                  ROUTE(fromField='rotation_changed',fromNode='FIRST_CYLINDERSENSOR',toField='set_rotation',toNode='FIRST_TRANSFORM'),
                  Transform(DEF='FireControl',rotation=(1,0,0,0),translation=(.50,0,-.75),
                    children=[
                    Shape(
                      geometry=Extrusion(crossSection=[(0.0,1.0),(0.7,1.4),(4.0,1.4),(4.0,1.0),(3.2,-0.1),(1.0,-0.1),(0.0,0.5),(0.0,1.0)],spine=[(0,0,0),(0,0,-.8)]),
                      appearance=Appearance(
                        material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])])])]),
            Transform(
              children=[
              Transform(DEF='Upper_Traverse_Plate',
                children=[
                Shape(
                  #  When attribute values are not specified, the default values from the VRML Specification are used. 
                  geometry=Cylinder(height=.2,radius=2),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
              Transform(DEF='Right_Base_Bracket',translation=(-1,.1,-1),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(-0.4,0.0),(.8,0.0),(1.2,0.2),(-0.4,0.2),(-0.4,0.0)],solid=False,spine=[(0.0,0.0,0.0),(0.0,1.3,0.0)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))]),
              Transform(DEF='Left_Base_Bracket',translation=(-1,.1,1),
                children=[
                Shape(
                  geometry=Extrusion(crossSection=[(-0.4,0.0),(1.2,0.0),(0.8,0.2),(-0.4,0.2),(-0.4,0.0)],solid=False,spine=[(0.0,0.0,0.0),(0.0,1.3,0.0)]),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,.3,0),emissiveColor=(0,0,.1),shininess=.2)))])]),
            ROUTE(fromField='rotation_changed',fromNode='Traversing_Sensor',toField='set_rotation',toNode='Traversing_Assembly')])])]),
      Viewpoint(DEF='Right',description='Mortar 120mm',orientation=(1,0,0,0),position=(2,0,17)),
      Viewpoint(DEF='Top_View',description='Mortar 120mm top view',orientation=(1,0,0,-1.2),position=(4,12,6)),
      Viewpoint(DEF='Tube_View',description='Tube axis',orientation=(0,1,0,1.70),position=(13,5,0)),
      Transform(DEF='ROLLING_ASSEMBLY',
        children=[
        Transform(rotation=(1,0,0,1.57),scale=(.8,.8,.8),translation=(3.15,-.7,0),
          children=[
          Shape(DEF='AXLE',
            geometry=Cylinder(height=5,radius=.2),
            appearance=Appearance(
              material=Material(diffuseColor=(.1,.1,.1)))),
          Transform(scale=(.8,.8,.8),translation=(0,2.4,0),
            children=[
            Shape(DEF='WHEEL_HUB',
              geometry=Cylinder(height=.1,radius=.4),
              appearance=Appearance(
                material=Material(diffuseColor=(.2,.2,.2),emissiveColor=(.1,.1,.1))))]),
          Transform(scale=(.8,.8,.8),translation=(0,-2.4,0),
            children=[
            Shape(USE='WHEEL_HUB')])]),
        Transform(scale=(.7,.7,.7),translation=(.50,0,0),
          children=[
          Transform(DEF='Right_Tire',rotation=(1,0,0,1.57),scale=(.6,.6,.6),translation=(3.8,-1,2.6),
            children=[
            Shape(DEF='TIRE',
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
              appearance=Appearance(
                material=Material(diffuseColor=(.1,.2,.2),shininess=.2))),
            Transform(scale=(.5,.8,.5),
              children=[
              Shape(DEF='WHEEL',
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(-1.5,0.1),(-0.7,0.1),(-0.3,0.2),(-0.2,0.4),(-0.1,0.5),(0.2,0.7),(0.6,.9),(0.6,-0.9),(0.2,-0.7),(-0.1,-0.5),(-0.2,-0.4),(-0.3,-0.2),(-0.7,-0.1),(-1.5,-0.1)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.4,.6,.1),emissiveColor=(0,0,.1),shininess=.2)))])]),
          Transform(DEF='Left_Tire',rotation=(1,0,0,1.57),scale=(.6,.6,.6),translation=(3.8,-1,-2.6),
            children=[
            Shape(USE='TIRE'),
            Transform(scale=(.5,.8,.5),
              children=[
              Shape(USE='WHEEL')])])])])]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.8),(0,0.5,1),(1,1,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RifledRecoilingMortar120mm.py")
