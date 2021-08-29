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
    GeoLOD(center=(41.669870498763935,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-4.x3d'],child2Url=['../../tiles/5/newport22-5.x3d'],child3Url=['../../tiles/5/newport23-4.x3d'],child4Url=['../../tiles/5/newport23-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[136,148,159,156,153,137,128,131,136,146,147,138,134,126,125,129,131,134,126,127,118,112,140,157,166,166,155,149,147,149,152,158,154,151,133,119,118,119,118,132,130,118,106,106,150,162,170,168,156,153,156,157,166,168,164,160,140,122,116,119,121,128,129,121,113,111,160,159,167,158,159,157,160,167,175,173,168,161,140,125,120,120,124,129,123,117,112,111,162,150,156,155,158,159,171,182,178,171,164,147,126,117,117,124,130,129,119,119,121,122,165,158,157,153,155,167,174,180,170,158,142,125,120,117,120,122,129,127,131,133,137,134,168,164,157,151,152,157,166,164,149,139,131,122,121,126,121,120,131,144,141,147,144,144,172,163,157,154,152,156,164,158,156,155,142,131,129,129,125,119,132,149,158,159,156,155,174,160,156,155,159,167,175,173,164,159,157,147,138,127,130,124,141,162,172,166,163,160,168,157,159,158,164,170,180,181,178,165,152,147,137,130,121,123,144,168,175,173,166,162,167,165,166,165,172,174,181,182,174,164,159,145,133,129,118,121,148,170,175,175,171,166,167,167,170,180,184,182,183,178,175,164,158,141,125,123,123,133,155,176,181,181,177,173,168,171,178,184,188,187,182,175,169,164,156,142,133,130,125,141,168,183,183,186,177,174,168,174,179,184,183,181,183,174,162,158,145,146,142,135,125,144,163,179,182,178,170,167,169,177,182,180,176,177,177,177,168,162,168,167,149,133,132,137,157,177,178,173,167,162,179,185,185,179,176,173,174,172,171,172,186,183,170,161,153,145,161,176,177,171,161,161,187,182,183,181,174,175,173,159,165,176,187,173,168,153,150,154,167,171,169,164,158,155,180,181,176,171,170,171,171,170,165,161,166,171,159,154,152,154,166,174,171,167,156,154,170,169,164,162,165,168,173,174,162,155,152,157,160,156,153,158,172,174,169,165,152,148,158,157,156,151,153,163,166,164,155,159,144,145,159,153,151,167,179,170,170,156,149,146,160,165,170,164,151,150,150,144,150,144,144,144,144,144,154,166,169,169,166,159,150,150,161,166,171,165,153,150,151,144,148,144,144,144,144,144,153,166,169,168,166,159,151,152],
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
