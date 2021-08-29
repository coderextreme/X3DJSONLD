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
    GeoLOD(center=(41.71825065109993,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-2.x3d'],child2Url=['../../tiles/5/newport24-3.x3d'],child3Url=['../../tiles/5/newport25-2.x3d'],child4Url=['../../tiles/5/newport25-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[144,144,146,152,161,162,157,157,160,159,155,142,145,146,149,151,155,159,151,152,159,161,148,140,146,148,155,150,150,142,139,140,134,132,138,131,144,157,157,152,152,162,176,175,143,141,138,142,143,145,135,129,132,133,133,133,137,136,148,153,157,159,162,168,173,174,139,136,133,138,133,129,127,131,130,132,132,138,139,141,140,151,154,156,163,165,167,165,133,133,141,135,130,133,139,135,140,136,137,134,133,134,143,149,151,150,150,159,151,151,131,132,130,133,135,134,133,138,138,138,137,137,137,141,137,137,138,138,140,142,140,140,132,129,129,132,132,129,136,141,145,148,150,149,143,141,145,144,137,136,150,138,141,142,141,133,137,136,151,151,147,150,155,160,161,161,159,153,155,143,143,143,144,149,146,144,141,136,142,142,154,165,166,159,155,164,171,170,168,160,155,153,148,147,157,157,153,152,129,135,126,146,156,168,175,166,163,161,167,171,164,163,156,158,158,153,157,158,160,160,135,139,147,142,140,151,161,161,162,162,171,172,170,165,163,161,156,158,162,166,166,165,157,165,163,142,136,150,156,164,177,175,175,172,169,171,175,170,166,168,176,175,169,167,163,157,152,151,145,142,150,158,163,171,170,172,179,181,181,182,176,170,171,178,168,166,158,152,150,152,160,152,140,148,160,162,161,166,171,182,184,183,181,180,180,169,163,164,153,154,155,161,160,152,144,142,144,148,161,173,180,187,186,188,187,187,174,175,176,173,151,153,153,154,152,145,145,142,140,149,164,178,185,187,188,182,187,181,181,177,169,168,152,153,154,154,149,147,146,143,140,148,165,174,182,184,185,181,185,185,188,182,173,173,162,161,155,154,155,149,146,148,140,149,171,173,176,189,186,179,172,181,187,185,175,172,166,166,167,163,155,159,152,146,145,148,162,177,181,189,184,168,164,162,165,170,160,157,164,164,166,166,164,160,159,161,153,147,161,183,188,183,177,172,164,166,161,148,137,135,157,163,161,162,163,164,163,157,150,146,159,174,178,176,173,170,174,183,188,169,140,137,155,163,160,161,164,165,165,154,149,146,159,174,177,176,173,170,173,182,188,171,143,139],
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
