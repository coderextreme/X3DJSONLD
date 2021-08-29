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
        texture=ImageTexture(url=['../../images/5/newport23-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[55,51,50,50,46,41,38,36,40,39,35,34,35,35,31,29,26,26,27,25,25,26,53,52,49,46,44,42,40,37,38,36,33,33,38,38,33,30,28,27,26,26,29,28,53,48,45,41,41,41,37,36,34,33,36,39,41,39,34,30,30,29,28,31,32,34,54,50,45,45,42,37,36,34,35,36,41,42,43,39,35,32,32,32,30,33,40,42,55,50,48,44,41,37,35,35,37,39,43,45,42,41,39,35,33,31,33,34,49,51,61,53,50,43,40,37,36,36,38,40,43,46,47,47,43,39,33,32,30,39,54,57,64,60,53,46,41,35,36,40,39,47,47,50,49,47,46,41,36,34,36,43,54,55,64,62,58,51,42,34,34,37,39,49,54,53,49,49,45,42,39,39,43,46,55,56,67,59,56,48,43,39,34,31,36,44,50,50,54,51,47,40,37,37,41,49,57,58,68,61,54,47,42,39,37,35,38,39,46,51,50,50,44,40,38,41,43,51,62,64,69,64,57,48,41,39,36,35,39,42,48,50,53,48,45,41,39,43,46,54,65,67,76,66,53,46,41,39,40,37,38,40,44,50,53,52,48,43,43,43,48,56,66,68,78,67,55,46,41,40,38,33,32,43,48,52,50,52,52,45,41,43,48,56,66,69,77,65,51,43,38,35,36,35,46,45,49,49,48,49,50,48,45,42,50,59,70,72,69,56,47,42,37,35,34,39,41,47,49,51,53,50,47,46,47,47,49,58,66,67,60,50,45,42,37,37,36,37,37,47,50,52,51,48,48,46,46,47,51,55,60,61,55,49,45,35,35,36,36,42,45,47,49,50,50,49,47,47,46,48,51,55,55,55,53,46,39,38,38,37,38,44,49,49,48,51,51,49,49,46,45,47,51,52,53,53,50,44,40,37,35,36,40,43,51,53,53,55,52,51,47,45,47,48,49,49,50,50,42,43,40,41,38,39,41,44,48,53,57,55,51,51,49,47,48,46,46,45,45,45,47,44,40,38,41,41,38,41,48,51,53,51,53,51,48,49,50,48,43,40,37,37,44,41,39,38,39,41,39,40,44,50,53,53,53,53,53,50,49,50,47,41,34,32,46,42,38,35,40,39,39,39,42,47,52,54,56,56,53,53,49,45,42,38,33,31,46,41,37,34,40,39,40,40,41,46,52,55,57,57,54,53,48,44,41,37,32,31],
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
