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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AnimatedViewpointRecorderSample.x3d',name='title'),
    meta(content='Example output from AnimatedViewpointRecorderExample showing results from four separate, previously computed, animated viewpoint recordings.',name='description'),
    meta(content='Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='9 November 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='AnimatedViewpointRecorderPrototype.x3d',name='reference'),
    meta(content='AnimatedViewpointRecorderExample.x3d',name='reference'),
    meta(content='recording animated viewpoint tour',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderSample.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Inline(DEF='HelloWorld',url=["../../../HelloWorld.x3d","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.x3d","../../../HelloWorld.wrl","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.wrl"]),
    #  ********** start recorded Animated Tour 0 using .x3d syntax ********** 
    Group(
      children=[
      Viewpoint(DEF='AnimatedViewpointRecorderViewpoint0',description='Animated Tour 0',orientation=(1,0,0,-0.000690534),position=(0,0.00675263,10)),
      #  samplingInterval=0.1 seconds, default TimeSensor loop=true 
      TimeSensor(DEF='AnimatedViewpointRecorderTimer0',cycleInterval=6.407,loop=True),
      PositionInterpolator(DEF='AnimatedViewpointRecorderPosition0',key=[0,0.01717,0.03418,0.05135,0.06836,0.08538,0.10254,0.11956,0.13657,0.15374,0.17075,0.18792,0.20493,0.22194,0.23911,0.25613,0.27329,0.29031,0.30732,0.32449,0.3415,0.35851,0.37568,0.3927,0.40986,1],keyValue=[(0,0.00675263,10),(0,0.884067,9.96085),(0,2.67779,9.63481),(0,4.76304,8.79281),(0,6.80765,7.32502),(0,8.50591,5.25829),(0,9.61809,2.73724),(0,10,0.00103736),(0,9.61675,-2.74195),(0,8.48232,-5.29625),(0,6.68996,-7.43266),(0,4.32236,-9.01761),(0,1.62865,-9.86648),(0,-1.19496,-9.92834),(0,-3.94716,-9.18803),(0,-6.3587,-7.71796),(0,-8.27764,-5.61075),(0,-9.51627,-3.07256),(0,-9.99581,-0.289271),(0,-9.67145,2.54224),(0,-8.57491,5.14498),(0,-6.79438,7.33731),(0,-4.44863,8.95597),(0,-1.76712,9.84261),(0,1.0812,9.94136),(0,-1,7)]),
      OrientationInterpolator(DEF='AnimatedViewpointRecorderOrientation0',key=[0,0.01717,0.03418,0.05135,0.06836,0.08538,0.10254,0.11956,0.13657,0.15374,0.17075,0.18792,0.20493,0.22194,0.23911,0.25613,0.27329,0.29031,0.30732,0.32449,0.3415,0.35851,0.37568,0.3927,0.40986,1],keyValue=[(1,0,0,-0.000690534),(1,0,0,-0.0885223),(1,0,0,-0.271086),(1,0,0,-0.496447),(1,0,0,-0.748806),(1,0,0,-1.01711),(1,0,0,-1.29353),(1,0,0,-1.57069),(1,0,0,-1.84855),(1,0,0,-2.12895),(1,0,0,-2.40873),(1,0,0,-2.69462),(1,0,0,-2.978),(1,0,-0,-3.26137),(1,0,-0,-3.54735),(1,0,-0,-3.83073),(1,0,-0,-4.1167),(1,0,-0,-4.40008),(1,0,-0,-4.68346),(1,0,-0,-4.96943),(1,0,-0,-5.25281),(1,0,-0,-5.53619),(1,0,-0,-5.82216),(1,0,-0,-6.10554),(-1,0,0,-6.17486),(1,0,0,-0)]),
      Group(
        children=[
        ROUTE(fromField='bindTime',fromNode='AnimatedViewpointRecorderViewpoint0',toField='startTime',toNode='AnimatedViewpointRecorderTimer0'),
        ROUTE(fromField='fraction_changed',fromNode='AnimatedViewpointRecorderTimer0',toField='set_fraction',toNode='AnimatedViewpointRecorderPosition0'),
        ROUTE(fromField='fraction_changed',fromNode='AnimatedViewpointRecorderTimer0',toField='set_fraction',toNode='AnimatedViewpointRecorderOrientation0'),
        ROUTE(fromField='value_changed',fromNode='AnimatedViewpointRecorderPosition0',toField='position',toNode='AnimatedViewpointRecorderViewpoint0'),
        ROUTE(fromField='value_changed',fromNode='AnimatedViewpointRecorderOrientation0',toField='orientation',toNode='AnimatedViewpointRecorderViewpoint0')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AnimatedViewpointRecorderSample.py")
