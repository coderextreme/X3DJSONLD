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
        texture=ImageTexture(url=['../../images/5/newport25-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[41,41,41,41,40,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,41,41,43,41,40,41,40,41,39,39,39,39,39,39,39,39,39,39,39,39,39,41,44,44,43,42,42,43,42,42,40,39,39,39,39,39,39,39,39,39,39,39,41,40,40,40,44,43,45,46,46,45,40,39,39,39,39,39,39,39,39,39,39,42,40,40,41,41,45,46,49,50,48,44,39,39,39,39,39,39,39,39,39,39,39,40,43,43,43,43,46,50,51,53,54,48,41,39,39,39,39,39,39,39,39,39,39,40,44,46,45,45,48,51,53,54,53,47,41,39,39,39,39,39,39,39,39,39,39,40,39,41,46,47,48,50,54,60,55,50,42,40,39,39,39,39,39,39,39,39,39,39,39,39,40,40,49,49,53,59,57,51,45,41,39,39,39,39,39,39,39,39,39,39,39,39,39,39,50,53,55,55,55,52,49,44,41,39,39,39,39,39,39,39,39,39,39,39,39,39,51,55,57,55,54,52,51,48,43,39,39,39,39,39,39,39,39,39,39,39,40,40,53,56,59,59,56,53,51,47,43,43,41,39,39,39,39,39,39,39,40,39,40,41,54,57,60,62,59,56,53,46,44,41,39,39,39,39,39,39,39,39,39,42,42,43,56,59,62,64,63,62,56,51,46,45,40,39,39,39,39,39,39,39,39,39,41,41,57,61,65,67,67,65,62,56,52,46,40,39,39,39,39,39,39,39,39,39,40,41,56,60,63,66,70,68,63,59,57,48,43,39,39,39,39,39,39,39,39,39,42,43,55,59,63,66,68,67,65,60,56,49,40,39,39,39,39,39,39,39,39,40,43,44,54,60,65,68,69,66,64,64,55,46,41,39,39,39,39,39,39,39,39,39,42,42,54,59,65,69,70,69,66,63,57,46,43,39,39,39,39,39,39,39,39,39,41,42,54,60,65,68,68,68,70,66,58,47,43,40,39,39,39,39,39,39,39,39,39,39,56,59,64,67,69,72,74,69,57,51,46,45,39,39,39,39,39,39,39,39,39,39,58,63,66,68,70,74,72,68,61,56,47,44,40,39,39,39,39,39,39,40,41,42,61,67,69,69,72,75,72,66,61,56,47,42,39,39,39,39,39,39,39,42,45,46,62,67,69,70,73,75,72,66,61,55,47,42,39,39,39,39,39,39,39,41,45,46],
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
