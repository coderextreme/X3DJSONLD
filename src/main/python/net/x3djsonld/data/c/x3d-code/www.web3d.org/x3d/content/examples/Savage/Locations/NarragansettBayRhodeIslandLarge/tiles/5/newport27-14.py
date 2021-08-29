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
        texture=ImageTexture(url=['../../images/5/newport27-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,23,23,18,12,12,12,16,19,20,24,28,31,35,39,43,46,47,48,49,50,51,23,25,25,19,13,12,12,14,16,17,23,27,32,37,40,43,45,48,50,51,52,52,24,23,27,22,12,12,13,14,15,17,21,23,32,36,39,43,47,50,52,52,53,53,29,25,24,16,13,12,13,13,14,15,17,22,29,33,37,43,48,51,52,53,54,54,35,36,34,29,13,12,13,14,14,17,23,24,23,29,36,42,47,50,52,54,55,55,42,43,40,34,16,12,13,14,18,26,29,28,23,27,33,40,45,49,51,54,56,56,52,51,45,37,26,13,13,18,24,29,29,31,29,26,31,37,42,47,51,55,56,56,58,56,48,39,31,17,13,17,17,21,19,27,27,27,30,36,41,46,52,55,56,56,59,55,46,38,34,23,16,18,17,16,16,22,27,28,27,34,40,47,53,56,57,56,63,57,59,45,35,27,19,18,19,18,19,29,30,30,29,32,40,47,53,56,56,56,72,76,69,55,38,27,23,21,23,24,20,29,30,30,30,29,39,47,52,55,55,54,83,81,67,52,38,29,24,23,26,28,21,21,30,30,30,28,37,47,52,54,52,51,83,71,59,45,37,30,23,21,23,30,22,20,27,29,28,27,33,43,50,51,50,50,67,59,53,42,36,31,27,26,24,23,19,19,26,30,30,26,29,39,45,48,48,48,63,62,57,46,36,30,30,27,27,31,29,19,23,31,31,28,29,33,40,43,45,45,63,62,57,48,33,31,32,28,30,34,35,20,22,31,32,32,27,28,35,40,42,42,61,61,54,40,33,34,33,29,30,32,33,30,27,32,33,33,31,26,29,37,40,41,58,49,43,39,40,36,36,30,30,32,33,34,32,30,31,29,28,26,26,32,36,36,48,45,46,53,51,41,42,40,31,31,31,34,24,26,26,26,26,26,26,27,29,28,50,47,48,51,55,48,45,53,44,32,30,26,24,24,24,25,25,25,25,25,25,25,55,49,49,59,59,50,50,54,44,35,30,25,22,21,23,24,24,24,24,24,24,24,51,50,56,61,60,51,49,52,52,41,34,26,22,21,22,23,24,24,24,23,24,24,52,53,67,69,66,60,55,62,59,47,36,28,22,20,20,22,22,23,24,24,24,24,52,53,66,68,67,62,57,60,58,47,36,29,22,19,20,22,21,23,24,24,24,24],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
