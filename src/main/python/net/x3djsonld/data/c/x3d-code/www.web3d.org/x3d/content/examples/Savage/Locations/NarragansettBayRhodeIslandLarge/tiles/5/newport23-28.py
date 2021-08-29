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
        texture=ImageTexture(url=['../../images/5/newport23-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[63,61,60,56,52,52,52,52,51,51,50,51,51,51,52,53,54,54,53,52,53,54,69,60,57,55,53,52,52,52,51,51,50,50,50,50,51,52,53,55,53,53,54,54,64,57,55,56,55,54,55,57,53,53,52,51,50,50,51,55,56,56,56,54,54,53,59,57,56,56,57,55,55,55,54,54,53,52,51,52,52,53,54,57,59,56,55,55,57,56,56,55,57,56,55,56,54,54,54,53,52,53,57,54,57,56,56,54,57,58,56,56,55,55,58,58,55,55,55,54,54,54,53,53,57,54,55,55,55,55,58,58,56,55,55,55,56,56,55,55,54,54,55,54,54,54,54,54,57,55,54,54,55,56,55,54,54,54,54,54,54,54,55,55,55,55,54,54,55,55,54,54,54,53,53,53,56,54,54,54,54,54,54,54,55,57,56,55,55,55,55,55,55,55,54,53,53,53,62,54,54,54,54,54,54,54,54,55,56,55,55,55,55,55,55,55,54,55,56,56,59,55,54,54,54,54,54,54,54,54,55,55,56,55,55,55,55,55,56,56,57,58,58,55,54,54,54,54,54,54,54,54,54,55,55,55,55,55,55,56,56,56,59,59,59,61,54,54,54,54,54,54,54,54,54,55,56,56,56,55,56,56,56,56,58,59,62,63,56,55,55,54,54,54,54,54,54,56,58,57,55,55,55,55,55,55,57,58,59,61,59,57,58,57,57,54,54,54,54,56,58,58,56,55,55,55,55,56,59,60,55,57,60,63,62,61,64,56,54,54,54,56,58,58,57,56,56,58,58,58,60,61,51,54,59,64,62,60,59,57,54,54,54,56,60,58,56,57,58,59,59,58,61,62,47,50,55,58,57,57,58,57,56,54,54,58,59,55,55,56,57,58,58,59,62,62,43,45,51,54,54,55,56,58,57,57,56,56,54,53,53,53,55,57,59,62,65,66,40,41,43,48,49,54,57,58,56,55,52,52,52,52,52,52,53,56,60,63,66,67,37,39,40,42,45,49,54,56,55,53,51,52,52,52,52,52,56,59,63,65,67,67,33,35,36,39,41,44,47,51,51,51,52,54,53,52,52,54,57,59,62,66,67,67,30,31,33,36,38,40,43,46,48,51,53,57,57,54,53,55,57,58,61,67,69,68,29,30,32,35,37,39,42,45,48,51,54,58,58,54,53,55,57,58,61,67,69,69],
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
