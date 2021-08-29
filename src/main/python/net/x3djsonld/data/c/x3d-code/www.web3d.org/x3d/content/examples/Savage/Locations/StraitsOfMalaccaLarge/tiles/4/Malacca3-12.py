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
        texture=ImageTexture(url=['../../images/4/Malacca3-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-4.689706692856765,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[31,19,30,28,29,26,30,29,24,14,9,19,21,24,27,24,17,22,4,3,3,4,29,17,31,35,29,30,24,21,29,26,26,25,5,12,26,13,3,3,8,3,2,2,19,16,33,32,25,23,25,29,19,40,33,15,10,15,9,10,21,4,4,2,2,1,34,23,12,44,28,43,23,26,24,31,18,30,12,29,27,25,19,2,4,18,1,1,40,46,10,13,42,45,9,8,41,23,14,26,3,22,3,4,4,8,20,18,2,2,40,40,28,8,10,6,5,5,5,30,40,22,29,32,20,5,23,19,14,4,1,2,19,15,11,8,8,33,36,31,9,4,25,5,4,14,14,14,21,10,4,5,3,3,26,34,34,17,40,43,42,27,4,6,5,4,3,2,4,3,6,4,10,4,3,2,67,63,48,38,28,21,14,10,13,22,1,29,5,3,3,2,5,10,8,1,1,1,57,49,67,46,52,49,33,35,19,11,23,15,3,1,27,3,2,2,8,3,4,3,25,32,33,36,59,51,47,25,16,11,4,1,2,15,6,3,2,4,11,4,2,1,50,30,18,22,23,37,44,21,31,20,22,11,14,5,4,3,2,3,2,2,1,3,49,42,18,12,18,36,27,19,24,8,5,21,4,4,3,2,3,2,1,3,1,1,57,37,24,21,18,28,29,60,30,19,17,3,3,3,7,6,2,2,2,5,3,2,31,55,41,17,4,20,9,26,23,16,23,21,4,3,3,4,2,3,3,2,3,2,27,52,42,15,14,14,14,21,20,30,18,8,3,2,4,4,3,4,3,2,2,3,26,57,37,26,10,9,5,6,8,38,22,6,6,4,5,4,4,6,5,5,2,3,26,53,29,22,21,18,9,6,7,7,6,5,4,4,6,5,9,10,6,12,6,5,23,27,28,11,22,14,10,4,4,4,4,5,5,5,28,24,26,11,10,7,7,6,19,33,39,15,8,8,9,5,8,5,6,7,10,7,8,23,20,7,23,2,3,3,17,21,28,18,20,10,8,18,10,6,29,12,14,10,27,11,16,13,3,4,4,4,17,20,29,19,20,13,7,19,11,6,19,16,12,10,27,9,13,15,5,2,3,3],
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
