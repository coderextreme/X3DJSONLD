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
        texture=ImageTexture(url=['../../images/5/newport11-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[67,71,69,67,67,64,62,60,62,61,60,61,59,57,57,56,55,52,51,51,50,49,48,67,71,70,67,66,65,63,63,63,60,60,59,59,58,57,57,55,52,51,50,50,49,48,70,74,72,68,66,64,62,61,62,61,61,61,61,58,55,56,54,52,50,49,51,49,49,70,73,72,69,67,66,64,63,61,62,60,59,59,56,54,53,53,53,52,50,52,50,48,67,70,70,70,68,66,64,63,63,63,63,61,59,57,54,53,54,52,49,49,49,48,47,67,67,68,69,68,66,65,65,64,66,66,63,61,58,56,54,55,53,48,47,48,47,48,70,68,69,70,70,70,68,67,67,68,66,62,59,57,56,55,53,52,51,49,49,49,51,74,72,73,72,72,71,69,67,66,66,63,61,59,60,59,55,53,52,51,50,50,49,47,77,75,76,76,75,74,71,68,67,66,63,60,57,58,58,56,54,52,51,51,51,49,47,78,77,78,79,80,78,75,70,67,65,63,61,59,58,57,55,56,54,53,53,50,49,46,78,77,79,80,80,79,74,69,66,64,62,60,58,59,59,56,56,55,54,53,50,49,46,78,75,75,77,78,77,73,69,67,65,64,62,60,60,58,57,56,56,55,54,51,49,46,75,73,74,75,75,72,71,69,68,66,65,63,62,61,59,58,57,57,56,54,52,50,47,68,69,71,72,70,69,68,70,69,67,64,62,62,62,60,59,58,57,56,54,52,51,50,64,67,69,70,69,67,68,70,68,66,63,62,62,61,60,59,58,57,57,56,54,52,52,66,69,69,69,67,64,65,67,68,66,63,63,62,61,60,59,58,57,57,57,57,56,53,71,72,72,68,67,65,64,66,67,66,65,63,61,60,59,59,58,59,59,57,57,58,56,71,72,71,67,66,65,65,65,66,66,65,62,59,60,59,59,59,60,59,57,55,56,57,70,69,68,66,65,64,63,64,65,65,64,62,60,60,60,59,59,59,58,57,54,54,55,67,67,67,66,65,63,62,60,62,63,63,63,62,61,62,61,59,59,59,58,57,57,56,63,65,66,66,65,64,64,63,63,64,63,63,62,61,62,62,61,61,60,58,58,59,59,62,62,63,64,65,66,67,67,65,62,61,62,60,59,60,61,61,62,60,58,58,60,63,64,63,63,63,64,66,66,66,64,61,60,62,60,59,60,61,61,61,60,59,59,62,65],
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
