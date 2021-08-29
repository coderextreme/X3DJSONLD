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
        texture=ImageTexture(url=['../../images/5/newport11-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[48,47,47,48,48,45,42,40,40,40,40,39,37,37,35,34,33,32,30,28,27,25,24,48,48,48,48,46,43,40,40,39,41,41,39,38,37,36,35,33,32,30,29,27,25,24,49,47,47,45,44,42,40,40,40,41,41,41,39,37,36,34,33,32,30,28,26,25,24,48,47,45,43,44,43,43,42,41,40,41,40,39,37,36,34,33,32,30,28,27,25,24,47,47,45,44,44,45,43,42,41,41,41,40,39,38,36,35,34,32,30,28,27,25,24,48,49,47,44,44,44,44,43,43,42,41,40,39,38,37,36,34,33,31,29,27,25,24,51,49,47,43,43,42,44,43,42,42,41,40,39,38,37,36,35,33,31,30,28,26,25,47,49,48,45,44,44,46,45,43,42,41,40,39,38,38,36,35,33,32,30,29,27,25,47,47,47,46,48,48,48,46,44,44,42,41,40,39,38,36,35,34,32,31,29,28,26,46,45,45,46,48,47,45,44,44,43,43,42,41,39,38,37,36,35,33,32,30,29,28,46,46,45,44,45,47,45,43,43,44,42,41,40,39,38,37,36,35,34,32,31,30,29,46,47,46,46,46,47,45,43,42,43,42,41,40,39,39,38,37,35,34,33,32,30,29,47,47,48,48,48,47,45,44,43,42,41,41,40,39,39,38,37,36,35,34,32,31,30,50,50,51,49,48,47,46,45,43,41,40,39,39,39,39,38,38,37,36,34,33,32,31,52,50,50,50,48,48,47,47,45,43,40,39,39,39,39,39,38,37,36,34,33,33,32,53,49,49,50,48,48,48,48,47,45,42,41,40,40,40,39,38,37,36,35,34,34,33,56,51,50,50,50,49,48,47,46,44,43,42,41,41,40,40,39,38,37,36,35,35,34,57,54,51,51,51,49,49,48,48,46,44,43,43,42,41,41,40,39,38,37,36,36,35,55,54,54,53,52,51,51,51,51,47,46,45,44,43,42,41,41,40,39,38,37,37,36,56,54,55,55,54,53,51,51,51,48,47,46,45,44,43,43,42,41,40,39,38,37,36,59,58,58,56,55,53,52,52,51,49,48,47,46,45,44,44,43,42,41,40,39,38,37,63,65,63,59,55,53,52,51,51,49,48,48,47,46,45,45,44,43,42,41,40,39,38,65,67,65,60,56,54,52,51,51,50,49,48,47,47,46,45,44,43,42,41,41,40,38],
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
