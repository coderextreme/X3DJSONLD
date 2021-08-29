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
    GeoLOD(center=(41.62371823998276,-71.23309215126221,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-24.x3d'],child2Url=['../../tiles/5/newport22-25.x3d'],child3Url=['../../tiles/5/newport23-24.x3d'],child4Url=['../../tiles/5/newport23-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[17,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,10,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,11,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,10,7,4,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,11,7,4,2,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,14,11,7,4,1,0,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,14,11,7,3,1,0,0,0,1,1,1,1,2,1,1,1,1,1,2,2,2,2,3,14,9,6,3,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,3,12,8,5,2,1,1,1,1,1,2,3,3,2,2,2,3,3,4,4,4,3,1,0,10,7,4,1,0,0,0,1,1,2,3,3,3,3,3,3,4,4,4,4,4,1,0,9,6,2,1,0,0,0,0,1,1,2,1,3,4,4,3,3,4,4,4,2,1,0,7,5,2,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,4,4,2,1,1,6,4,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,2,3,2,1,1,1,5,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,4,4,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
