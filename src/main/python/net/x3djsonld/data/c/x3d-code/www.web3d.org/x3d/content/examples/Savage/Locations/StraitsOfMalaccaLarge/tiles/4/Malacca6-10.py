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
        texture=ImageTexture(url=['../../images/4/Malacca6-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[23,31,28,26,25,39,32,26,20,43,56,28,44,55,49,44,20,33,29,18,16,15,41,34,29,40,58,62,31,75,18,32,50,33,52,41,27,18,28,11,8,38,32,35,52,58,38,49,40,51,65,57,31,22,13,19,20,22,19,17,11,11,14,10,30,26,62,61,64,86,72,55,64,64,52,23,15,17,16,18,7,8,7,7,6,10,10,11,60,65,61,94,115,129,71,35,37,50,21,13,10,18,13,10,11,16,19,8,4,5,65,76,84,87,98,78,63,98,57,45,49,39,40,11,12,14,6,12,22,6,6,6,76,75,62,96,106,87,63,90,74,34,61,61,45,32,12,26,10,5,14,8,5,5,61,65,59,51,39,60,72,50,41,59,62,38,43,14,30,30,30,10,8,6,3,2,50,35,40,40,31,32,62,54,69,65,35,19,37,13,25,8,10,7,17,4,8,8,126,68,43,46,41,32,60,53,21,36,30,26,15,8,25,6,3,15,21,4,4,5,90,119,49,37,37,22,40,42,39,11,42,13,18,2,26,23,2,5,25,5,4,3,140,35,39,47,22,26,29,37,29,17,26,16,16,6,24,24,18,4,3,3,4,3,206,89,73,9,11,34,23,18,12,18,12,5,13,7,18,31,18,3,6,3,3,3,44,13,7,17,39,28,19,15,20,11,18,4,4,4,5,8,6,6,5,7,4,4,17,21,11,10,25,28,24,20,15,7,5,22,17,5,4,4,5,10,3,-3,2,5,24,20,6,9,8,15,22,23,20,17,3,7,6,4,5,4,2,1,0,1,2,2,25,16,12,18,23,22,16,5,9,4,6,6,4,6,2,1,1,1,1,3,1,1,22,19,21,1,14,10,4,3,10,5,3,5,7,4,2,1,2,1,0,0,2,1,16,3,23,18,2,3,5,7,5,6,5,3,0,0,1,3,3,1,2,1,0,1,1,4,10,6,11,6,8,6,2,3,5,3,0,2,1,1,2,3,2,3,3,4,6,9,2,4,9,9,6,3,7,6,0,0,0,0,1,2,2,2,3,3,5,2,7,10,2,3,6,9,5,2,5,2,1,0,0,0,1,1,2,2,3,4,4,2],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
