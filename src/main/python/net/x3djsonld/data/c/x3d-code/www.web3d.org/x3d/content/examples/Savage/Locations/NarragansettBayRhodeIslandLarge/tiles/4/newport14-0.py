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
    GeoLOD(center=(41.81501095577192,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-0.x3d'],child2Url=['../../tiles/5/newport28-1.x3d'],child3Url=['../../tiles/5/newport29-0.x3d'],child4Url=['../../tiles/5/newport29-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[167,157,160,158,165,177,170,157,163,172,181,185,190,180,178,175,168,165,169,179,187,189,159,159,159,166,169,168,157,160,172,174,181,185,186,177,180,178,171,172,177,185,191,194,160,159,167,174,175,176,170,172,171,172,172,179,182,182,181,177,171,169,180,184,189,190,155,166,172,182,183,176,180,180,180,182,187,192,187,185,185,177,173,173,177,181,188,189,171,182,191,193,188,183,186,185,189,200,203,197,187,188,184,182,179,181,186,184,186,187,180,190,196,196,190,193,191,190,198,202,203,196,191,193,189,183,180,182,185,190,187,187,186,194,202,200,202,200,191,194,200,202,205,201,198,192,191,188,190,188,189,190,189,188,184,197,203,202,202,200,198,198,198,206,205,205,201,193,190,188,189,190,189,187,179,177,185,194,200,208,208,205,203,206,209,207,208,208,204,200,197,194,191,189,188,182,176,175,188,193,194,203,206,204,202,206,209,208,211,208,206,199,194,192,191,191,185,179,180,180,188,194,197,198,198,203,208,206,206,205,204,208,204,198,194,193,189,188,185,185,182,180,190,198,201,202,203,205,206,203,209,206,206,207,202,200,197,192,188,186,185,186,180,178,193,202,201,201,199,203,204,205,206,206,209,210,201,199,198,195,190,191,190,187,185,184,191,200,200,200,201,200,200,203,204,208,209,209,205,200,199,195,202,198,194,191,186,185,197,198,200,199,200,202,202,205,204,205,207,209,205,203,197,198,199,201,198,194,189,189,202,207,200,204,204,202,207,209,208,209,209,206,205,204,200,201,204,203,198,196,194,194,198,197,202,201,203,207,207,211,212,211,209,211,204,197,199,204,203,195,195,195,196,195,195,200,205,208,210,210,215,214,215,219,215,210,203,199,203,198,194,190,192,193,193,190,191,200,204,212,216,217,220,221,219,220,215,208,203,200,200,193,192,192,190,190,181,180,189,197,203,211,217,220,223,222,224,218,213,208,205,201,201,201,192,187,185,185,175,173,187,194,204,213,215,220,225,229,222,218,214,208,202,207,209,208,196,187,178,175,176,176,187,194,204,213,215,220,225,229,222,218,214,208,203,207,209,208,197,187,179,176,177,176],
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
