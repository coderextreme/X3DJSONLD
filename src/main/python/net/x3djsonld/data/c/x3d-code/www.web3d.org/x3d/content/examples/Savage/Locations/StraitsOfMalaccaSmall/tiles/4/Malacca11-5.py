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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[6,4,5,10,6,7,7,4,10,5,7,12,12,7,15,14,20,27,24,137,36,42,6,7,9,5,6,4,9,5,4,12,5,7,6,7,7,12,17,31,23,29,29,33,7,8,7,6,3,4,7,4,4,8,3,10,7,10,7,11,26,17,27,30,30,43,4,3,2,6,3,3,6,8,4,12,5,5,4,15,20,16,19,26,23,26,28,34,3,2,1,2,3,3,2,6,7,3,4,5,13,16,18,18,31,23,23,28,40,34,2,2,3,11,3,3,3,3,8,4,3,5,13,14,13,20,20,20,28,18,38,50,3,2,3,7,4,3,4,6,4,2,5,6,10,17,23,20,31,42,40,29,34,50,13,10,9,12,3,3,4,12,5,3,4,10,18,15,22,17,29,54,34,46,47,37,9,6,5,7,11,4,11,9,5,4,9,9,20,22,24,36,23,17,48,46,57,44,9,7,8,8,11,7,11,14,7,5,10,16,19,26,26,26,37,28,24,35,52,52,13,11,12,11,10,18,9,6,6,7,15,17,22,33,29,34,34,39,58,35,43,87,15,17,12,18,8,9,12,10,5,5,17,17,24,32,36,26,36,37,48,46,45,89,9,17,14,11,16,14,8,12,8,13,19,20,14,25,33,31,32,44,72,66,89,96,11,13,12,17,10,11,19,14,7,7,16,26,18,29,30,29,35,37,44,67,52,57,17,11,17,14,152,16,14,8,8,4,14,29,31,29,27,32,36,49,45,66,51,78,17,15,14,12,13,15,16,19,10,7,14,21,15,17,22,26,31,48,41,52,85,141,15,13,19,19,11,10,10,8,8,9,10,20,21,21,31,31,39,71,43,64,150,337,15,17,14,15,23,14,7,12,11,10,8,17,29,28,32,33,44,64,69,84,377,524,12,17,17,18,19,11,8,13,42,14,11,19,36,20,29,59,408,382,51,67,625,747,13,11,14,20,13,16,7,13,20,18,12,20,27,37,31,168,638,382,252,73,269,765,17,23,19,19,23,14,11,22,15,24,15,27,21,34,35,200,677,512,312,174,419,672,13,21,23,33,16,11,17,17,26,34,18,15,25,28,27,463,851,667,140,238,535,849,12,20,21,33,17,11,17,14,32,43,16,15,25,26,27,456,886,669,169,249,537,834],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
