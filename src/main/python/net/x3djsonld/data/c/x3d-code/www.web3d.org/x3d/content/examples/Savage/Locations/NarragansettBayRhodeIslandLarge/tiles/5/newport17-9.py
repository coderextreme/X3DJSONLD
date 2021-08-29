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
        texture=ImageTexture(url=['../../images/5/newport17-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[41,38,41,38,39,43,43,42,39,37,39,41,45,46,50,51,47,46,46,44,42,42,43,39,34,36,37,43,45,44,40,40,38,40,42,47,52,52,52,46,45,42,42,42,42,39,39,39,44,43,42,44,41,42,39,41,42,47,52,51,48,44,43,43,41,41,46,43,40,39,44,44,46,44,44,41,39,40,43,43,45,48,43,47,48,44,42,42,52,45,42,39,42,42,45,46,45,42,40,45,50,46,42,42,45,45,44,47,48,49,61,52,45,42,41,41,41,46,42,42,41,40,47,52,45,43,42,45,46,49,49,48,66,60,52,47,42,45,40,46,41,40,42,43,41,48,49,45,45,43,46,47,48,49,72,65,57,50,45,44,43,44,42,43,41,42,40,41,46,45,46,45,47,45,42,42,79,73,66,58,48,44,43,41,43,40,42,43,40,38,40,44,42,44,44,45,44,44,80,78,68,61,53,47,43,38,39,41,42,42,44,41,38,38,41,46,43,41,40,40,84,80,71,63,55,47,44,39,38,42,44,47,46,44,40,37,41,40,38,39,40,40,87,81,74,65,58,51,46,40,41,44,47,48,49,48,42,40,37,40,41,40,39,39,89,79,74,66,58,49,48,44,45,46,47,50,53,50,45,47,43,41,41,42,40,40,87,78,71,63,58,53,50,46,46,49,54,54,54,51,46,49,47,42,46,42,43,42,84,76,68,61,55,51,49,47,47,52,57,62,53,51,46,47,49,46,42,41,43,44,80,74,66,59,54,55,49,46,47,51,53,56,54,51,49,46,47,47,43,44,43,44,76,71,65,59,53,55,50,48,50,51,51,50,53,54,50,48,47,45,45,49,53,53,74,69,65,60,56,55,49,50,50,51,52,51,54,55,52,50,51,53,47,45,46,48,70,66,61,59,57,54,52,51,54,51,52,52,52,51,54,62,61,60,56,51,47,46,68,66,63,58,55,54,54,55,52,50,53,54,51,57,60,68,69,66,67,56,50,49,68,65,59,58,55,56,56,58,54,55,53,50,52,58,71,77,74,73,69,66,55,54,67,64,64,60,57,58,58,58,54,55,55,53,58,64,74,80,77,74,72,70,60,58,67,68,67,65,65,64,63,61,58,60,55,54,61,68,76,77,78,76,77,67,60,58,68,69,68,66,67,66,64,62,60,60,55,54,61,68,76,77,78,77,76,65,59,57],
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
