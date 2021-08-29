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
        texture=ImageTexture(url=['../../images/5/newport17-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[43,42,40,39,37,28,29,28,28,37,44,43,40,47,48,49,52,51,45,44,43,45,38,38,49,41,36,34,36,34,29,30,28,38,35,41,42,48,44,44,44,40,41,40,40,41,40,51,45,35,38,40,40,36,34,33,35,37,35,35,39,36,37,39,36,35,44,46,44,43,44,45,40,41,44,36,35,39,37,38,38,38,35,37,34,36,33,34,44,44,43,45,49,45,48,43,42,42,39,37,36,38,40,43,41,35,35,30,31,31,48,41,43,45,51,56,53,43,39,40,38,38,43,43,42,39,41,36,34,36,34,36,43,42,43,48,44,53,55,52,45,36,38,37,42,39,40,41,39,38,38,32,41,41,39,43,42,45,51,52,50,46,40,38,36,36,43,38,43,36,35,34,33,34,37,36,40,43,44,46,47,46,45,41,36,35,36,36,33,34,32,33,34,32,39,40,40,41,38,48,54,46,48,43,38,33,35,36,40,35,30,33,33,34,33,35,38,45,47,47,40,46,51,48,44,48,41,36,33,35,34,32,33,34,31,38,43,50,51,52,51,51,45,48,46,54,58,50,38,33,34,34,34,35,40,40,37,44,49,58,59,55,61,61,47,51,51,52,52,49,37,38,35,34,38,44,46,47,55,53,53,56,59,66,69,71,52,58,57,55,44,37,37,40,36,34,43,55,52,53,57,58,53,57,62,70,75,77,60,56,63,56,47,39,40,36,34,45,47,56,55,56,64,54,52,56,62,74,77,76,55,54,52,52,45,38,41,40,43,49,52,51,55,61,57,50,52,55,57,65,74,76,48,50,38,39,47,46,39,46,45,48,55,50,52,55,52,50,55,54,61,68,79,82,53,48,39,34,41,40,39,44,49,46,46,53,49,52,59,51,51,60,62,71,84,85,49,42,42,41,39,41,40,39,38,48,49,50,54,58,48,57,54,62,64,74,85,87,49,46,46,46,48,50,48,42,50,49,58,60,62,56,53,62,58,58,65,72,81,82,51,48,57,57,52,46,44,47,50,47,58,61,60,55,58,59,57,63,68,69,76,78,55,56,57,51,59,53,44,53,49,51,51,60,64,56,59,66,68,64,63,67,72,74,63,63,53,51,53,49,51,50,56,52,54,65,68,63,66,61,57,64,67,67,68,68,62,63,54,51,50,48,48,50,57,55,55,63,68,61,67,61,57,63,68,68,70,69],
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
