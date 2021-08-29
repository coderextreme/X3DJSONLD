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
    GeoLOD(center=(41.76663080343592,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-2.x3d'],child2Url=['../../tiles/5/newport26-3.x3d'],child3Url=['../../tiles/5/newport27-2.x3d'],child4Url=['../../tiles/5/newport27-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[155,163,160,161,164,165,165,154,149,146,159,174,177,176,173,170,173,182,188,171,143,139,152,158,156,158,161,171,161,157,161,152,156,167,171,178,178,173,169,168,171,179,167,162,143,149,158,161,161,160,159,161,156,154,159,163,179,188,189,179,180,170,164,161,154,152,137,139,147,152,145,142,145,150,153,155,153,166,187,192,192,190,184,178,170,175,181,179,133,136,141,142,139,140,143,144,147,148,149,171,185,194,197,188,185,182,181,182,178,178,131,142,140,144,145,141,145,154,148,147,155,167,180,190,188,187,186,186,186,185,185,186,142,141,149,151,151,151,147,154,156,155,162,166,174,179,187,187,189,188,193,194,193,191,143,143,151,145,141,148,157,158,160,169,169,174,177,181,183,191,186,193,195,198,198,199,134,137,136,133,139,145,154,163,168,178,183,183,183,185,190,190,191,192,190,198,197,197,128,130,133,131,130,134,146,164,185,187,183,188,189,191,192,196,197,194,193,192,202,203,129,130,137,139,135,136,144,164,182,189,185,187,198,200,202,199,197,191,188,197,202,202,135,140,146,144,136,137,143,166,182,188,184,192,200,201,201,198,197,193,192,194,194,197,150,148,149,150,149,146,145,162,183,186,184,194,203,204,202,200,200,191,186,183,183,182,154,164,162,168,148,145,147,172,183,182,185,194,204,205,204,205,199,195,186,173,169,169,169,174,175,168,158,149,146,165,174,178,185,196,203,206,207,206,203,199,191,181,174,171,178,179,170,165,154,150,148,152,163,171,181,192,200,203,208,207,202,194,190,184,172,169,191,182,170,169,158,149,149,151,151,161,169,185,193,203,207,205,200,196,199,194,180,177,183,174,166,165,150,154,160,156,151,159,169,176,189,198,203,199,199,200,200,197,189,185,176,177,176,163,152,150,151,160,156,161,172,172,181,192,194,195,200,200,200,198,195,193,181,190,185,163,155,152,166,163,157,156,163,169,176,182,189,197,199,200,197,189,187,186,189,198,191,169,169,166,172,171,164,158,168,169,175,192,194,202,201,197,192,185,183,184,189,198,190,169,170,166,173,170,165,159,166,170,174,193,194,202,201,196,192,185,183,183],
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
