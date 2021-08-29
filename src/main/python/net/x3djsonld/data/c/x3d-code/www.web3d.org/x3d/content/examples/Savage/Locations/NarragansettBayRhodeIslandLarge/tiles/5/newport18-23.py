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
        texture=ImageTexture(url=['../../images/5/newport18-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[52,50,53,50,56,55,57,55,57,56,57,56,55,59,56,59,65,68,71,76,79,79,51,52,56,57,50,56,55,56,57,58,57,55,49,62,61,60,64,70,73,78,78,80,54,55,55,50,51,53,57,58,60,60,57,49,48,58,61,64,66,72,74,77,88,88,57,55,51,53,53,55,57,63,63,62,59,53,55,50,56,62,67,70,74,84,87,86,58,58,51,51,53,57,60,63,63,58,55,48,48,55,58,59,65,69,75,76,78,79,53,51,49,51,52,54,58,62,61,55,54,48,48,51,53,57,62,64,66,66,71,73,47,46,47,50,53,53,59,59,60,51,48,48,48,48,57,59,53,53,53,57,67,67,38,43,46,50,51,57,59,58,53,49,48,48,48,48,57,60,53,53,53,53,53,53,39,41,46,52,56,58,58,58,55,53,48,48,48,48,57,57,53,53,53,53,53,53,41,45,47,55,57,58,61,60,54,51,48,48,48,48,55,59,53,53,53,53,53,53,42,46,45,56,65,61,60,64,58,57,50,48,48,56,56,54,53,53,53,53,53,53,48,49,55,56,57,59,57,55,58,53,50,56,56,61,57,54,53,53,53,53,53,53,45,49,52,57,54,57,61,60,53,52,59,55,58,60,58,53,53,53,53,53,53,54,43,50,51,54,56,55,56,53,49,50,56,59,62,60,59,56,53,53,53,54,65,66,42,49,49,49,50,50,49,47,43,51,55,59,60,59,60,60,59,56,60,70,74,73,42,45,47,50,51,47,45,32,43,43,49,55,57,58,58,56,61,61,65,67,69,69,42,44,44,48,55,48,37,32,34,40,42,46,51,54,54,57,59,64,65,70,70,71,37,40,43,51,57,47,37,32,32,32,34,40,43,47,49,54,58,63,68,68,72,72,36,41,42,48,52,50,32,32,32,32,32,32,36,40,44,50,55,60,62,65,68,68,33,43,45,47,49,44,37,34,32,32,32,32,32,35,41,44,49,50,55,59,60,61,33,37,40,43,45,45,38,31,25,32,32,32,32,32,41,39,44,47,49,53,58,59,30,38,44,40,40,38,34,31,29,27,32,32,32,32,33,36,42,44,47,48,56,57,30,40,34,40,38,35,26,35,30,28,31,32,32,32,33,39,44,45,45,47,51,51,30,42,32,39,38,33,26,36,31,28,30,32,32,32,35,41,43,44,46,47,49,50],
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
