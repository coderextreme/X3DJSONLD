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
        texture=ImageTexture(url=['../../images/5/newport13-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[54,54,56,61,61,58,58,60,60,63,64,65,67,69,70,71,72,74,76,77,79,81,81,56,56,57,55,56,53,54,58,61,64,65,66,66,67,69,69,71,73,76,77,78,79,80,53,53,55,53,54,53,54,56,60,62,64,65,65,66,66,67,71,75,77,77,76,76,77,51,52,54,54,55,56,55,55,58,60,64,63,62,63,66,68,71,73,74,75,75,75,77,54,55,57,55,53,54,53,52,55,57,62,64,63,64,68,70,69,69,70,71,74,75,76,57,58,58,55,54,53,52,53,56,59,62,62,63,66,70,70,70,69,69,70,71,71,73,58,58,57,55,56,56,55,55,56,56,58,60,61,65,67,68,69,71,71,72,70,70,73,59,57,55,54,55,56,57,60,57,54,54,58,61,64,65,66,68,71,73,73,70,71,74,58,57,56,53,53,54,55,56,56,54,55,58,61,64,67,65,65,66,70,72,72,72,75,60,58,55,51,50,52,52,52,54,55,56,59,62,65,68,67,65,67,72,74,74,74,75,59,55,53,52,52,54,52,51,55,56,57,59,62,65,69,70,67,68,71,73,74,74,74,57,57,56,53,54,55,55,55,57,57,56,57,59,62,66,72,71,68,67,69,71,73,74,56,56,56,54,53,53,55,56,57,57,57,59,61,61,64,69,72,72,70,69,71,72,74,56,56,56,56,54,53,56,56,57,58,59,61,63,62,63,64,68,70,72,71,72,73,74,54,54,55,57,56,55,56,56,56,57,57,59,63,64,64,65,69,70,72,74,74,74,75,55,55,56,57,58,57,56,56,57,57,58,59,64,65,65,65,69,71,71,71,72,75,75,56,54,57,58,58,57,56,56,57,59,60,62,65,64,64,65,67,69,71,72,74,75,76,54,51,56,60,59,57,56,56,58,60,62,62,64,64,64,64,68,69,71,74,73,74,78,50,49,54,60,61,60,61,59,58,58,60,63,64,64,67,68,69,70,72,73,74,77,78,49,48,51,58,62,61,61,62,60,58,59,63,64,64,67,70,69,69,72,74,76,79,79,48,48,49,55,59,59,59,60,59,58,59,63,64,67,68,69,69,70,73,77,79,82,84,48,48,48,50,58,61,61,60,61,62,63,63,63,67,68,70,71,72,73,75,76,78,80,48,48,48,50,58,64,62,61,63,65,64,63,63,66,68,70,72,72,73,74,75,77,77],
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
