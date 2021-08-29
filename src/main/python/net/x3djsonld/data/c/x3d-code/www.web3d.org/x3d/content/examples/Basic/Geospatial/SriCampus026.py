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
    component(level=1,name='Geospatial'),
    meta(content='SriCampus026.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus026.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus026.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-52',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[24,25,1,0,-1,22,23,25,24,-1,20,21,23,22,-1,18,19,21,20,-1,16,17,19,18,-1,14,15,17,16,-1,12,13,15,14,-1,10,11,13,12,-1,8,9,11,10,-1,6,7,9,8,-1,4,5,7,6,-1,2,3,5,4,-1,0,1,3,2,-1,25,23,21,19,17,15,13,11,9,7,5,3,1,-1,0,2,4,6,8,10,12,14,16,18,20,22,24,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-26-VERTICES',point=[(0.0,0.0,0.0),(0.0,-19.118906,0.0),(-47.281948,0.030344266,76.53163),(-47.281948,-19.118906,76.53163),(-89.46675,0.030344266,144.66078),(-89.46675,-19.118906,144.66078),(-79.76882,0.030344266,150.80469),(-79.76882,-19.118906,150.80469),(-55.13782,0.030344266,111.250626),(-55.13782,-19.118906,111.250626),(-35.866737,0.030344266,123.35565),(-35.866737,-19.118906,123.35565),(-26.391157,0.030344266,108.25669),(-26.391157,-19.118906,108.25669),(-45.779972,0.030344266,95.76958),(-45.779972,-19.118906,95.76958),(-24.160658,0.030344266,60.919914),(-24.160658,-19.118906,60.919914),(-4.8944416,0.030344266,73.114),(-4.8944416,-19.118906,73.114),(4.670042,0.030344266,57.821125),(4.670042,-19.118906,57.821125),(-14.979609,0.030344266,45.7227),(-14.979609,-19.118906,45.7227),(9.798365,0.030344266,6.229705),(9.798365,-19.118906,6.229705)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus026.py")
