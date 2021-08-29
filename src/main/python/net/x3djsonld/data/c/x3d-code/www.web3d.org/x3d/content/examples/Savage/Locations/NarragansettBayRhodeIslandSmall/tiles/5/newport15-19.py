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
        texture=ImageTexture(url=['../../images/5/newport15-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[58,58,58,61,62,61,59,61,59,56,57,55,55,55,50,48,48,48,48,48,48,48,48,63,62,59,60,61,60,60,62,61,58,58,58,58,55,51,49,48,48,48,48,48,48,48,65,63,61,60,60,60,61,63,63,62,60,59,58,55,55,52,49,49,48,48,48,48,48,63,61,60,60,58,60,64,68,64,61,60,58,56,57,57,55,50,50,49,48,48,48,48,59,58,59,59,59,62,67,67,63,62,62,60,59,57,55,53,51,51,52,51,49,48,48,55,56,59,59,59,59,58,54,56,60,63,60,59,56,53,51,52,52,56,56,54,52,50,56,56,59,60,58,56,53,51,55,59,61,57,54,52,52,50,50,50,54,57,56,55,55,57,59,60,60,59,57,53,52,57,61,62,58,55,52,52,52,53,53,53,54,54,55,57,56,58,59,59,60,60,58,56,60,61,60,58,56,54,52,54,57,57,55,54,55,56,56,54,55,56,57,58,60,61,59,59,58,55,52,52,51,52,57,60,59,58,57,56,59,59,55,55,56,56,59,60,60,59,57,55,52,51,52,53,55,56,56,57,58,58,57,57,58,56,56,56,56,58,58,58,57,55,52,50,49,50,50,52,53,54,56,58,58,58,57,58,54,53,54,54,54,55,55,55,52,52,52,49,48,47,50,52,54,56,58,58,59,60,62,53,52,53,53,52,53,53,52,51,51,50,48,48,49,51,53,54,56,57,59,60,62,60,51,50,51,51,51,52,51,49,48,47,46,44,47,50,52,53,53,55,56,58,60,61,60,49,49,49,49,48,48,47,48,47,44,42,42,45,48,50,51,53,55,56,58,59,60,61,50,49,48,47,47,46,45,45,44,40,39,39,43,46,48,49,52,54,55,58,59,60,61,52,50,48,47,47,45,44,41,36,33,35,39,43,44,45,47,49,51,53,55,57,58,59,52,50,46,46,46,44,43,37,32,32,36,43,42,42,43,44,45,48,51,53,54,55,56,51,49,45,45,44,42,38,33,32,32,36,42,41,40,42,43,44,45,48,50,51,53,53,52,49,46,43,42,39,34,32,32,32,36,39,38,39,41,42,42,42,44,46,48,50,51,55,52,48,44,41,36,32,32,32,32,33,33,33,36,39,40,41,41,42,43,46,48,50,56,53,49,45,41,34,32,32,32,32,32,32,32,34,37,39,40,41,42,43,44,46,49],
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
