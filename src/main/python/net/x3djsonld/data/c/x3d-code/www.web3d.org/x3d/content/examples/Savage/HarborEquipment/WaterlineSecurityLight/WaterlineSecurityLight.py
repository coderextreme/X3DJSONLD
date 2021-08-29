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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='WaterlineSecurityLight.x3d',name='title'),
    meta(content='A waterline security light typcially draped over the side of ships to illuminate the water line of the ships hull at night',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='23 March 2005',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/WaterlineSecurityLight/WaterlineSecurityLight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='VizX3D, http://www.vivaty.com/downloads/studio',name='generator'),
    meta(content='Wings3D, http://www.wings3d.com',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='dad_GROUND',
      children=[
      Group(DEF='GROUND',
        children=[
        Transform(DEF='dad_Import_Base',
          children=[
          Group(DEF='Import_Base',
            children=[
            Transform(DEF='dad_Group1',rotation=(0,0,1,.593),translation=(1.79823,-.02976,-.07015),
              children=[
              Group(DEF='Group1',
                children=[
                Transform(DEF='dad_Cylinder1',
                  children=[
                  Shape(DEF='Cylinder1',
                    appearance=Appearance(
                      material=Material(DEF='material0_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Cylinder(height=0.988,radius=0.591))]),
                Transform(DEF='dad_Sphere1',translation=(0,.50459,0),
                  children=[
                  Shape(DEF='Sphere1',
                    appearance=Appearance(
                      material=Material(DEF='material1_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Sphere(radius=0.576))]),
                Transform(DEF='dad_Cylinder2',translation=(.01852,-.37545,-.0371),
                  children=[
                  Shape(DEF='Cylinder2',
                    appearance=Appearance(
                      material=Material(DEF='material2_mat',diffuseColor=(1,.95686,.83529),emissiveColor=(.98823,1,.81176))),
                    geometry=Cylinder(height=0.367,radius=0.435))]),
                Transform(DEF='dad_Cylinder3',translation=(-.00333,.94678,-.05365),
                  children=[
                  Shape(DEF='Cylinder3',
                    appearance=Appearance(
                      material=Material(DEF='material3_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Cylinder(height=0.582,radius=0.201))])])]),
            Transform(DEF='dad_light',rotation=(0,0,-1,.716),
              children=[
              Group(DEF='light',
                children=[
                Transform(DEF='dad_Cylinder4',
                  children=[
                  Shape(DEF='Cylinder4',
                    appearance=Appearance(
                      material=Material(DEF='material4_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Cylinder(height=0.988,radius=0.591))]),
                Transform(DEF='dad_Sphere2',rotation=(0,0,-1,.489),translation=(0,.50459,0),
                  children=[
                  Shape(DEF='Sphere2',
                    appearance=Appearance(
                      material=Material(DEF='material5_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Sphere(radius=0.576))]),
                Transform(DEF='dad_Cylinder5',translation=(.01852,-.38912,-.00992),
                  children=[
                  Shape(DEF='Cylinder5',
                    appearance=Appearance(
                      material=Material(DEF='material6_mat',diffuseColor=(1,.95686,.83529),emissiveColor=(.98823,1,.81176))),
                    geometry=Cylinder(height=0.367,radius=0.435))]),
                Transform(DEF='dad_Cylinder6',translation=(-.00333,.94678,-.05365),
                  children=[
                  Shape(DEF='Cylinder6',
                    appearance=Appearance(
                      material=Material(DEF='material7_mat',diffuseColor=(.8,.8,.8))),
                    geometry=Cylinder(height=0.582,radius=0.201))])])]),
            Transform(DEF='dad_Sphere3',translation=(.94454,1.07084,-.1876),
              children=[
              Shape(DEF='Sphere3',
                appearance=Appearance(
                  material=Material(DEF='material8_mat',diffuseColor=(.8,.8,.8))),
                geometry=Sphere(radius=0.351))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WaterlineSecurityLight.py")
