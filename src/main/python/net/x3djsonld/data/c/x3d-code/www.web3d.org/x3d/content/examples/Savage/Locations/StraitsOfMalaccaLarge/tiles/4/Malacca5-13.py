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
        texture=ImageTexture(url=['../../images/4/Malacca5-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,105.95125062410463,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[18,37,15,23,68,32,49,26,27,52,51,58,25,23,17,-2,2,1,1,1,3,2,30,44,26,46,26,31,67,80,67,50,62,99,62,31,26,5,0,2,1,1,2,2,81,57,34,23,37,34,73,53,46,39,49,59,31,290,35,30,10,8,1,2,2,1,12,19,11,5,35,25,21,43,20,21,31,32,26,23,13,7,3,3,2,3,1,1,-3,23,6,6,22,13,6,15,22,13,7,16,1,2,2,2,2,2,2,2,2,2,22,21,16,13,50,17,3,4,9,4,3,3,2,0,2,3,2,1,2,2,2,1,20,15,3,23,53,22,10,5,4,2,2,2,2,0,1,1,1,1,2,1,3,0,25,26,51,48,44,26,6,4,2,2,2,2,2,1,2,0,2,2,1,1,2,2,24,52,58,43,57,30,9,2,2,2,2,1,2,3,1,1,0,0,2,1,2,2,32,38,61,62,43,34,2,3,2,3,2,2,2,1,1,1,1,1,2,3,1,0,13,40,41,43,45,93,3,2,1,2,2,1,3,3,2,2,2,1,2,1,0,3,12,39,34,17,36,3,2,6,2,2,2,3,3,3,3,1,0,1,1,2,1,1,24,33,23,5,8,0,1,2,2,3,2,2,4,2,3,1,1,0,1,0,0,1,12,43,31,17,5,2,2,3,2,3,2,3,2,2,3,3,1,0,0,0,1,0,32,15,9,12,4,3,3,3,2,4,3,3,3,3,2,1,0,1,1,1,1,2,18,13,34,14,34,5,3,2,3,3,4,2,2,2,1,2,1,1,1,3,5,0,30,19,18,31,12,161,3,4,2,2,3,2,2,1,0,1,2,1,0,2,6,5,6,15,35,10,0,2,3,3,3,1,2,1,1,0,0,1,2,2,0,0,4,3,11,20,22,8,0,1,2,2,3,2,2,1,1,0,1,1,2,1,2,3,0,2,26,25,48,3,1,3,1,1,1,1,1,1,1,1,1,2,3,3,3,1,3,1,44,19,19,5,1,2,1,0,1,0,1,1,1,2,3,3,2,3,3,2,1,3,38,13,14,2,0,1,1,1,2,0,1,0,1,2,2,2,2,3,4,2,1,1],
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
