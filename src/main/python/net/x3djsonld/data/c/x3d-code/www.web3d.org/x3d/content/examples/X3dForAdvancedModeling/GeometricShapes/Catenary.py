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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='Catenary.x3d',name='title'),
    meta(content='A catenary is the curve that an idealized hanging chain or cable assumes under its own weight when supported only at its ends. The curve has a U-like shape, superficially similar in appearance to a parabola, but it is not a parabola: it is a (scaled, rotated) graph of the hyperbolic cosine.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='11 October 2016',name='created'),
    meta(content='25 October 2020',name='modified'),
    meta(content='https://en.wikipedia.org/wiki/Catenary',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Catenoid',name='reference'),
    meta(content='Ronen Barzel, Faking Dynamics of Ropes and Springs, IEEE Computer Graphics and Animation (CG+A), May-June 1997, pp. 31-39.',name='reference'),
    meta(content='http://www.ronenbarzel.org/papers/fakedyn.pdf',name='reference'),
    meta(content='Catenary line shape',name='subject'),
    meta(content='Under development',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/Catenary.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Catenary.x3d')]
    #  TODO build example 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Catenary.py")
