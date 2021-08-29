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
    meta(content='Type209PrevezeDieselSubmarine.x3d',name='title'),
    meta(content='Alper SINAV',name='creator'),
    meta(content='1 August 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='This is a Type 209 Preveze Class Submarine From Turkish Submarine Fleet. It consists of a cylindric pressure hull, hydroplanes, rudder, propeller and superstructure with tower.',name='description'),
    meta(content='Alper SINAV',name='creator'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/Type209PrevezeDieselSubmarine.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.4,0.4),(0.25,0.6,0.6),(0.1,0.4,0.4)],skyAngle=[1.309,1.571],skyColor=[(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    Viewpoint(description='Type 209 Preveze Diesel Submarine: look away'),
    Viewpoint(description='Listen Sonar',position=(0,0,3)),
    #  Following is construction of submarine 
    Transform(scale=(0.2,0.2,0.2),
      #  original rotation 0 0 1 -0.8 
      children=[
      Transform(DEF='ROT',
        children=[
        Transform(DEF='SUBTRANS',
          children=[
          Transform(DEF='SUBROTATE',
            children=[
            Group(DEF='SUBMARINE',
              #  Main Pessure Hull and upper form super structure 
              children=[
              Transform(rotation=(-1,0,0,1.57),
                children=[
                Transform(DEF='Z90',rotation=(0,0,1,1.57),
                  children=[
                  Shape(
                    appearance=Appearance(DEF='SUBOUT',
                      material=Material(DEF='Total',diffuseColor=(0.0,0.0,0.1),emissiveColor=(0.1,0.1,0.1),specularColor=(0.6,0.5,0.5))),
                    geometry=Extrusion(ccw=False,creaseAngle=0.785,crossSection=[(0,2),(0.2,1.95),(0.4,1.92),(0.6,1.9),(0.8,1.8),(1,1.7),(1,2.19),(0.9,2.28),(0.8,2.37),(0.7,2.4),(-0.7,2.4),(-0.8,2.37),(-0.9,2.28),(-1,2.19),(-1,1.7),(-0.8,1.8),(-0.6,1.9),(-0.4,1.92),(-0.2,1.95),(0,2)],spine=[(0,-7,0),(0,7,0)])),
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='Total')),
                    geometry=Cylinder(height=14,radius=2)),
                  Transform(scale=(2,2,2),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='Total')),
                      geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.3,0.3),(1,1)],spine=[(0,7,0),(0,3.5,0)]))]),
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='Total')),
                    geometry=Extrusion(ccw=False,creaseAngle=0.785,crossSection=[(0,2),(0.2,1.95),(0.4,1.92),(0.6,1.9),(0.8,1.8),(1,1.7),(1,2.19),(0.9,2.28),(0.8,2.37),(0.7,2.4),(-0.7,2.4),(-0.8,2.37),(-0.9,2.28),(-1,2.19),(-1,1.7),(-0.8,1.8),(-0.6,1.9),(-0.4,1.92),(-0.2,1.95),(0,2)],scale=[(1,1),(0.1,0.1)],spine=[(0,-7,0),(0,-9,0)]))])]),
              #  Head section of submarine MAIN BALAST TANKS 
              Transform(center=(0,0,14),translation=(7,0,0),
                children=[
                Shape(
                  geometry=Sphere(radius=2),
                  appearance=Appearance(
                    material=Material(USE='Total')))]),
              #  Propeller copyright LtJg Burcin KAYALI 
              Transform(scale=(0.2,0.15,0.15),translation=(-14.2,0,0),
                children=[
                Inline(url=["Type209Propeller.wrl","https://savage.nps.edu/Savage/Submarines/Various/Type209Propeller.wrl"])]),
              #  TOWER 
              Transform(scale=(4,0.5,1),translation=(-2,3,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='Total')),
                  geometry=Cylinder(height=4,radius=0.6))]),
              #  Retractable Mast Group 
              Transform(DEF='PERISCOPETRANS',translation=(-2,3,0),
                children=[
                Shape(DEF='PERISCOPE',
                  appearance=Appearance(
                    material=Material(USE='Total')),
                  geometry=Cylinder(height=6,radius=0.1))]),
              Transform(DEF='UHFANTENNATRANS',translation=(-4,3,0),
                children=[
                Shape(USE='PERISCOPE')]),
              #  Rudder and Hydro planes 
              Group(DEF='RUDDER',
                children=[
                Transform(translation=(-13,1,0),
                  children=[
                  Transform(DEF='LowRudderRot',
                    children=[
                    Transform(scale=(1,1,0.2),
                      children=[
                      Shape(
                        geometry=Cylinder(DEF='BOWHYDPLANE',height=1,radius=0.5),
                        appearance=Appearance(
                          material=Material(USE='Total')))])])]),
                Transform(translation=(-13,-1,0),
                  children=[
                  Transform(DEF='UpRudderRot',
                    children=[
                    Transform(scale=(1,1,0.2),
                      children=[
                      Shape(
                        geometry=Cylinder(USE='BOWHYDPLANE'),
                        appearance=Appearance(
                          material=Material(USE='Total')))])])])]),
              Group(DEF='BOWPLANE',
                children=[
                Transform(translation=(-12.5,0,1),
                  children=[
                  Transform(rotation=(1,0,0,1.57),
                    children=[
                    Transform(DEF='RBowPlaneRot',
                      children=[
                      Transform(scale=(1,1,0.2),
                        children=[
                        Shape(
                          geometry=Cylinder(USE='BOWHYDPLANE'),
                          appearance=Appearance(
                            material=Material(USE='Total')))])])])]),
                Transform(translation=(-12.5,0,-1),
                  children=[
                  Transform(rotation=(1,0,0,1.57),
                    children=[
                    Transform(DEF='LBowPlaneRot',rotation=(0,1,0,0.8),
                      children=[
                      Transform(scale=(1,1,0.2),
                        children=[
                        Shape(
                          geometry=Cylinder(USE='BOWHYDPLANE'),
                          appearance=Appearance(
                            material=Material(USE='Total')))])])])])])])]),
          Sound(intensity=0.5,maxBack=70,maxFront=120,minBack=50,minFront=100,
            source=AudioClip(description='sonar ping',loop=True,url=["sonar.wav","https://savage.nps.edu/Savage/Submarines/various/sonar.wav","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/tone1.wav"]))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Type209PrevezeDieselSubmarine.py")
