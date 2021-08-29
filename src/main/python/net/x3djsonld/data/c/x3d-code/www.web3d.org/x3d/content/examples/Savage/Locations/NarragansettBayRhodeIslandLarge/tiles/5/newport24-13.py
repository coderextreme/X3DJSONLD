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
        texture=ImageTexture(url=['../../images/5/newport24-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,51,55,57,61,66,68,67,67,69,67,67,73,77,77,72,70,70,60,53,47,46,50,53,54,55,60,64,64,65,65,63,67,68,67,73,73,71,68,64,57,51,44,43,52,51,53,51,57,62,61,60,59,58,61,61,66,70,65,61,60,53,51,45,40,40,46,43,50,52,53,52,52,54,53,53,56,57,61,58,53,50,48,45,45,41,38,37,42,43,47,48,49,50,50,50,48,48,47,53,52,49,46,44,45,41,38,33,31,31,47,40,36,38,42,45,44,43,46,45,44,45,44,43,44,46,40,37,31,31,29,29,43,42,36,33,33,33,33,33,38,40,40,36,37,37,37,39,37,35,30,29,28,28,36,34,33,38,39,39,34,34,40,40,40,36,33,34,37,33,33,30,28,29,33,34,47,45,49,47,43,40,41,42,43,42,41,40,42,39,33,33,30,31,32,34,37,38,51,51,53,54,50,42,42,45,42,42,43,42,41,40,40,37,37,38,43,42,43,43,55,55,55,51,45,44,43,46,43,43,42,44,43,44,49,47,47,49,47,47,46,46,59,59,54,50,50,48,47,45,44,44,44,45,48,54,53,53,55,53,51,52,53,53,63,63,58,57,54,48,47,47,48,48,48,49,50,53,56,59,58,54,52,54,53,53,68,67,62,59,54,48,49,50,53,51,51,52,54,52,55,58,57,58,60,58,57,57,68,64,62,62,67,66,61,55,55,55,54,54,58,63,61,60,66,71,69,66,66,65,67,72,73,74,69,65,62,61,60,61,61,64,64,58,61,66,70,71,73,74,74,74,69,71,71,72,66,59,62,60,60,60,65,63,61,63,62,64,70,72,73,74,70,69,77,69,59,60,53,47,53,54,58,61,61,59,58,60,59,60,62,68,72,66,61,61,70,64,55,53,56,49,39,46,51,53,52,54,52,52,51,51,54,54,58,59,50,50,64,60,54,53,48,41,30,29,33,36,39,42,44,41,42,41,44,44,45,43,40,40,61,53,54,51,44,36,26,26,25,24,25,30,37,36,37,37,37,41,39,37,37,37,47,47,44,42,37,30,28,28,27,24,24,24,22,27,32,36,33,35,37,40,40,40,33,32,28,25,25,27,28,28,27,25,25,22,21,24,29,32,33,33,36,38,42,43,31,29,26,25,25,28,28,28,28,26,25,23,21,23,27,31,32,32,36,38,42,42],
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
