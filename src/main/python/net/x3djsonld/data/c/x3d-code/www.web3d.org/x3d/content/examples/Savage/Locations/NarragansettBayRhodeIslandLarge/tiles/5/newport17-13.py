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
        texture=ImageTexture(url=['../../images/5/newport17-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[61,60,59,60,63,62,64,64,68,68,67,67,69,68,69,70,71,76,73,76,77,75,59,57,57,58,61,61,61,63,66,71,73,65,69,68,70,72,69,71,71,67,69,70,53,55,55,54,55,58,58,63,67,69,70,66,65,68,66,71,74,72,68,68,67,68,51,52,51,50,53,53,52,53,59,61,62,67,64,64,63,69,73,76,71,66,64,64,49,47,48,47,49,50,48,51,53,50,53,63,63,65,63,64,70,74,75,73,69,68,44,45,43,44,44,44,49,49,52,54,54,58,61,62,66,67,66,68,71,74,70,69,43,42,42,42,42,42,46,49,52,54,54,56,57,62,64,67,63,64,69,73,72,72,38,39,39,40,40,43,45,48,47,54,56,55,57,58,62,59,64,69,70,65,65,65,35,36,40,38,43,43,44,45,47,50,51,54,56,54,59,60,56,60,65,61,61,60,40,38,40,47,45,46,48,45,47,46,48,50,52,51,53,58,56,52,55,55,57,59,42,50,49,53,51,49,50,50,47,46,45,48,48,54,56,53,52,50,51,58,59,58,46,47,46,48,52,58,56,60,52,46,47,48,46,50,54,52,54,52,56,52,53,52,52,51,50,50,52,52,53,53,55,49,52,46,47,55,54,56,58,63,56,54,46,45,55,50,51,51,49,48,49,49,50,48,49,48,55,54,55,60,59,65,55,55,48,46,51,52,53,51,49,49,48,48,48,51,51,53,57,56,56,52,56,64,60,51,45,43,51,53,55,53,52,49,49,47,50,49,48,54,56,56,58,61,55,53,52,42,35,35,49,53,54,55,54,52,51,51,50,51,50,49,53,54,51,59,57,47,38,34,30,29,51,51,54,53,52,53,52,52,52,54,53,47,46,44,45,48,53,43,38,31,24,24,56,56,54,52,54,54,53,53,53,51,51,47,43,40,50,53,43,37,31,29,27,28,55,52,51,54,52,56,56,56,54,51,51,46,42,49,49,46,40,33,34,30,26,26,53,53,52,52,53,55,57,57,54,52,52,48,46,44,50,44,36,33,28,29,30,31,45,52,51,53,56,55,56,58,55,52,48,41,47,44,37,33,38,33,30,29,37,37,49,50,46,52,54,54,56,56,56,52,44,46,47,43,32,30,33,35,28,30,48,50,50,49,46,51,55,53,56,55,56,51,46,46,44,47,32,26,32,35,28,31,48,50],
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
