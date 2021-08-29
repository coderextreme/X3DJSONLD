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
        texture=ImageTexture(url=['../../images/5/newport9-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[55,54,52,52,51,49,51,50,49,47,44,43,43,45,46,45,43,41,36,33,33,33,33,55,54,53,51,50,50,50,48,48,48,47,46,47,47,47,45,43,40,36,34,33,32,31,55,55,54,51,50,51,50,47,48,49,48,46,46,43,42,40,40,38,36,34,34,32,31,57,55,52,51,51,51,51,49,47,47,47,46,43,39,38,37,37,37,36,35,35,35,34,55,54,53,53,50,48,49,48,47,48,46,45,44,40,40,39,37,37,38,38,37,36,35,53,52,52,53,51,49,49,49,50,50,50,46,44,42,41,39,38,37,37,38,36,34,34,53,53,53,53,52,50,49,51,52,51,50,47,44,42,40,40,40,38,35,35,35,34,33,53,53,54,53,51,51,50,51,50,48,48,46,43,42,41,42,42,39,35,35,34,33,33,54,53,53,52,51,52,51,50,49,47,45,45,43,41,41,42,41,38,36,36,34,34,35,54,53,52,53,55,55,52,51,51,49,46,45,43,42,40,39,38,35,36,36,36,36,37,53,53,54,57,59,57,54,49,48,48,48,49,46,44,42,38,36,33,35,36,36,38,37,54,52,53,58,60,57,55,53,50,47,46,46,45,43,41,39,37,36,35,35,35,37,38,53,52,53,57,58,56,56,54,51,48,46,45,47,46,44,41,39,38,37,35,34,36,37,55,54,56,59,59,57,54,53,51,50,48,48,48,47,45,45,43,38,37,35,35,39,37,56,55,58,58,58,57,54,52,51,51,50,49,47,46,45,46,44,39,36,36,38,39,36,57,56,57,56,56,55,54,52,52,52,51,49,47,46,44,45,43,40,37,38,40,39,35,59,58,56,53,54,55,53,52,52,53,52,50,49,48,47,46,43,42,40,39,39,37,33,61,62,57,54,54,55,55,55,54,52,51,50,50,48,46,44,43,42,41,40,41,41,37,63,62,58,56,55,54,57,57,55,52,50,50,50,47,45,44,44,44,44,43,42,41,39,65,62,59,61,58,55,57,56,54,53,52,49,48,47,45,43,44,48,49,46,43,41,42,64,63,61,63,63,59,58,57,56,55,53,49,46,46,46,43,43,45,47,45,42,40,42,65,64,60,62,63,62,59,57,57,56,54,51,47,47,46,45,46,44,44,43,43,43,44,65,63,58,60,63,63,60,56,55,56,54,52,49,49,48,46,46,44,44,42,44,45,45],
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
