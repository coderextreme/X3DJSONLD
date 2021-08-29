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
        texture=ImageTexture(url=['../../images/4/Malacca8-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[131,61,96,97,81,97,65,48,40,37,32,22,32,25,13,17,15,8,18,7,5,5,74,70,40,31,33,27,24,20,21,16,26,17,10,21,19,27,28,22,7,10,6,7,112,121,108,50,44,38,29,37,29,23,17,17,13,22,21,28,23,26,31,8,11,13,52,114,87,76,62,58,61,39,32,31,28,35,11,44,57,36,48,37,44,26,21,20,45,93,69,50,63,33,29,26,29,37,11,16,17,31,45,56,50,29,42,47,37,24,54,68,44,30,23,15,30,28,15,15,6,6,5,13,18,36,29,22,52,38,14,26,47,90,38,36,28,30,16,17,14,12,28,48,18,5,3,27,12,15,35,12,13,9,45,45,34,27,35,21,20,30,17,22,17,47,34,38,19,3,20,14,23,44,15,14,42,29,29,33,39,25,15,24,14,37,41,77,60,42,27,10,11,8,22,9,22,27,26,30,28,25,24,23,10,11,24,48,64,51,75,53,51,12,13,29,18,10,9,4,25,30,19,9,17,7,14,23,61,67,77,39,57,37,21,10,9,9,23,27,31,29,28,36,25,24,24,20,30,60,74,59,43,50,41,19,32,30,22,33,28,28,24,23,41,47,47,27,23,23,66,65,63,45,28,35,22,5,8,12,36,25,33,25,34,34,51,53,42,29,22,18,52,41,35,20,10,9,17,23,13,25,36,34,34,36,35,37,30,55,50,43,21,12,17,9,15,13,23,21,31,25,42,50,28,8,36,25,33,31,49,50,42,46,39,30,16,21,6,8,9,21,31,53,42,34,9,29,28,33,33,27,42,44,41,42,35,40,27,14,36,34,16,14,25,19,32,28,17,32,31,34,29,31,37,36,36,39,28,21,31,31,24,10,11,23,31,12,7,25,38,36,38,38,41,40,38,39,37,30,18,29,60,24,20,25,14,30,25,1,11,37,8,38,30,30,38,37,14,35,22,9,24,47,52,28,35,51,33,26,12,15,34,38,36,37,40,38,37,36,35,30,20,28,25,25,42,15,23,40,16,31,37,7,36,37,38,39,33,34,36,34,32,26,19,29,21,27,44,14,26,36,18,34,35,5,35,36,38,39,32,34,35,34],
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
