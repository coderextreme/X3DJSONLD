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
        texture=ImageTexture(url=['../../images/5/newport21-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[68,69,69,69,70,69,66,63,59,55,54,54,52,47,46,45,46,46,45,44,43,43,67,68,68,68,69,69,66,62,57,54,52,52,51,47,47,47,47,47,46,45,44,44,67,68,68,67,68,69,65,61,56,55,54,53,51,49,49,49,50,49,46,45,43,42,67,67,68,69,69,68,63,58,55,55,55,54,52,52,50,50,50,50,46,44,44,44,67,67,67,69,69,67,62,55,55,56,56,54,52,52,52,53,52,50,47,45,44,44,67,68,67,69,68,64,58,54,54,55,53,53,53,53,54,54,51,48,46,45,45,45,67,67,68,69,66,62,54,53,54,56,55,54,53,55,55,54,50,47,48,47,46,46,67,67,68,69,65,59,54,52,55,55,56,55,53,55,55,54,50,49,50,48,47,47,68,68,68,67,63,58,54,52,53,54,55,55,55,55,55,54,51,51,51,50,49,48,69,67,66,64,60,57,54,52,51,52,53,55,56,57,56,54,53,53,52,50,50,50,69,66,65,63,59,54,49,49,49,49,51,53,57,60,58,55,55,54,53,51,51,52,69,65,63,61,55,49,49,49,49,49,49,53,59,61,57,56,55,54,53,54,55,55,68,64,61,57,52,49,49,49,50,49,49,53,59,59,57,55,54,53,52,54,59,59,67,65,60,55,51,49,49,49,49,49,50,56,60,57,56,55,54,53,52,56,57,57,66,63,58,53,49,49,49,49,49,49,51,56,58,57,55,54,53,52,52,55,56,55,63,57,55,53,49,48,49,49,49,49,53,56,57,55,54,53,52,51,52,55,55,55,61,57,52,49,49,48,49,49,48,49,53,56,55,54,52,52,51,52,53,54,55,55,62,59,54,49,49,49,49,49,49,49,54,55,54,53,52,51,51,52,53,54,54,54,63,58,54,49,49,49,49,49,49,51,55,56,54,53,53,52,51,51,52,53,54,54,63,57,51,49,49,49,49,49,49,54,55,54,52,52,52,52,52,51,51,52,53,53,59,56,50,49,49,49,48,49,51,55,55,53,52,52,51,52,52,51,51,52,53,54,56,53,51,49,49,49,49,49,54,56,54,53,52,52,52,51,51,51,51,52,54,54,59,53,49,49,49,49,49,50,55,56,54,53,52,52,52,52,52,51,51,51,52,52,59,54,49,49,49,49,49,50,56,56,54,53,52,52,52,52,52,51,51,51,51,51],
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
