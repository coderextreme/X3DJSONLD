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
    meta(content='Bear.x3d',name='title'),
    meta(content='Michael Hadley',name='creator'),
    meta(content='28 September 2000',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='Russian Bomber TY-95 Bear',name='description'),
    meta(content='BearModelingProjectReport.pdf',name='reference'),
    meta(content='BearModelingProjectReport.doc',name='reference'),
    meta(content='tu116-3.gif',name='Image'),
    meta(content='tu95-8.gif',name='Image'),
    meta(content='tu95-9.gif',name='Image'),
    meta(content='tu95kd-1.jpg',name='Image'),
    meta(content='tu95km-2.gif',name='Image'),
    meta(content='tu95m5-1.jpg',name='Image'),
    meta(content='tu95ms-1.jpg',name='Image'),
    meta(content='tu95ms-2.jpg',name='Image'),
    meta(content='tu95rc-7.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Bear-Russia/Bear.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  View Points 
    children=[
    NavigationInfo(DEF='Examine'),
    Viewpoint(DEF='Side',description='Bear side view',position=(-17,0,50)),
    Viewpoint(DEF='Front',description='Bear front view',orientation=(0,1,0,1.57),position=(25,0,0)),
    Viewpoint(DEF='Top',description='Bear top view',orientation=(1,0,0,-1.57),position=(-17,60,0)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.3,.7),(0,0.35,0.75),(0,0.4,0.8)],skyAngle=[1.309,1.571],skyColor=[(0,0.3,0.8),(0,0.5,1),(1,1,1)]),
    #  Main Transform of Bear 
    Transform(
      children=[
      Shape(
        #  Fuselage of Bear 
        geometry=Extrusion(DEF='Fuselage',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.30,-0.0),(-1.196,.494),(-.923,.923),(-.494,1.196),(0.00,1.30)],orientation=[(0,0,1,.78),(0,0,1,-.785),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(.05,.05),(.5,.3),(.6,.4),(.7,.5),(.8,.6),(.9,.7),(1,.8),(1,.9),(1,1),(1,1)],spine=[(-39.1,1.3,0),(-39,1.25,0),(-36.4,1.2,0),(-33.8,1.15,0),(-31.2,1.1,0),(-28.6,1.05,0),(-26,1,0),(-23.4,1,0),(0,1,0),(2.6,1,0)]),
        appearance=Appearance(DEF='plane_color',
          material=Material(),)),
      Shape(
        #  Main Wing 
        geometry=Extrusion(DEF='Wing',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.25,.1),(1,1),(.25,.1)],spine=[(-19.5,.1,23.4),(-6.5,.7,0),(-19.5,.1,-23.4)]),
        appearance=Appearance(USE='plane_color')),
      Shape(
        #  Tail 
        geometry=Extrusion(DEF='Tail',creaseAngle=3.14,crossSection=[(4.5,0),(2,-.4),(0,-.5),(-3,-.4),(-4.2,-.3),(-4.3,0),(-4.2,.3),(-3,.4),(0,.5),(2,.4),(4.5,0)],orientation=[(0,0,1,-.85),(0,0,1,-.85),(0,0,1,-.60),(0,0,1,-.60)],scale=[(1,.9),(1,.9),(.7,.9),(.3,.9)],spine=[(-33.2,.98,0),(-34,1.9,0),(-35,2.4,0),(-38,7.2,0)]),
        appearance=Appearance(USE='plane_color')),
      Shape(
        #  Stabalizer 
        geometry=Extrusion(DEF='Stabalizers',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.25,.1),(.5,.5),(.25,.1)],spine=[(-40.2,1.75,7.5),(-35,1.8,0),(-40.2,1.75,-7.5)]),
        appearance=Appearance(USE='plane_color')),
      Shape(
        #  Nose of Plane 
        geometry=Extrusion(DEF='nose',creaseAngle=2.5,crossSection=[(-.75,0),(-.698,.494),(-.5615,.923),(-.347,1.196),(0,1.3),(.494,1.196),(.923,.923),(1.196,.494),(1.3,0),(1.196,-.494),(.923,-.923),(.494,-1.196),(0,-1.3),(-.347,-1.196),(-.5615,-.923),(-.698,-.494),(-.75,0)],scale=[(1,1),(1,1),(1,.92),(.68,.62),(.37,.31),(0.01,0.01)],spine=[(2.6,1,0),(3.2,1,0),(4,1,0),(5,1,0),(5.6,1,0),(5.8,1,0)]),
        appearance=Appearance(USE='plane_color')),
      Transform(DEF='Gunner_nose',scale=(1.5,1,1.4),translation=(5.2,.9,0),
        #  Glass portion of nose for gunner 
        children=[
        Shape(
          geometry=Sphere(DEF='Gunners_nose',radius=.5),
          appearance=Appearance(DEF='glass',
            material=Material(diffuseColor=(0.1,0.1,0.8))))]),
      Shape(
        #  Glass Portion of Cockpit for pilot 
        geometry=Extrusion(DEF='cockpit',creaseAngle=2.5,crossSection=[(0,-1.3),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.3,0),(-1.196,.494),(-.923,.923),(-.494,1.196),(0,1.3),(0,-1.3)],scale=[(1,1),(.98,.92),(.68,.62),(.37,.31),(0.01,0.01)],spine=[(2.5,1,0),(2.75,1,0),(3,1,0),(3.5,1,0),(4,1,0)]),
        appearance=Appearance(USE='glass')),
      Transform(DEF='Engine_pod_trans1_',translation=(-13.24,.5,11.7),
        #  Engine Pod # 1 (Leftmost looking towards the nose of plane) Pod 1 defines all elements that are then reused for Pods 2 3 and 4 
        #  Pod 1 defines all elements that are then reused for Pods 2 3 and 4 
        children=[
        Shape(
          geometry=Extrusion(DEF='Engine_pod',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.1,.2),(.4,.3),(.6,.5),(.8,.6),(.9,.9),(1,1)],spine=[(0,.3,0),(1,.25,0),(2,.2,0),(3,0,0),(4,0,0),(7.5,0,0)]),
          appearance=Appearance(USE='plane_color')),
        Transform(DEF='Engine_Prop_Base',translation=(7.5,0,0),
          children=[
          Shape(
            geometry=Extrusion(DEF='Engine_inside_prop_base',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(.9,.9),(.85,.55)],spine=[(0,0,0),(.3,0,0),(.6,0,0)]),
            appearance=Appearance(DEF='prop_base',
              material=Material(diffuseColor=(0.4,0.4,0.4)))),
          Shape(
            geometry=Extrusion(DEF='Engine_outside_prop_base',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.8,.8),(.5,.5),(.1,.1)],spine=[(.61,0,0),(1.3,0,0),(1.9,0,0)]),
            appearance=Appearance(USE='prop_base')),
          Shape(),]),
        Group(
          #  Small Prop blades Group 1 - includes all small (front) prop blades. Defined here and reused for each pod. 
          children=[
          Transform(rotation=(1,0,0,.785),translation=(8.2,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(DEF='small_props',creaseAngle=3.14,crossSection=[(-1.9,0),(-1.8,-.1),(-1.5,-.2),(-1.2,-.3),(0,-.15),(0,.15),(-1.2,.3),(-1.5,.2),(-1.8,.1),(-1.9,0)],orientation=[(1,0,0,.48),(1,0,0,.49),(1,0,0,.5)],scale=[(1,1),(1,1),(1,1)],solid=False,spine=[(.295,0,0),(.3,0,0),(.305,0,0)]),
                appearance=Appearance(DEF='props',
                  material=Material(diffuseColor=(.1,.1,.1),shininess=.7)))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))])])]),
        Group(
          #  Large Prop blades Group 1 - includes all large (rear) prop blades. Defined here and reused for each pod. 
          children=[
          Transform(translation=(7.5,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(DEF='big_props',creaseAngle=3.14,crossSection=[(-2.5,0),(-2.45,-.1),(-2.2,-.2),(-1.2,-.3),(0,-.15),(0,.15),(-1.2,.3),(-2.2,.2),(-2.45,.1),(-2.5,0)],orientation=[(1,0,0,.48),(1,0,0,.49),(1,0,0,.5)],scale=[(1,1),(1,1),(1,1)],solid=False,spine=[(.295,0,0),(.3,0,0),(.305,0,0)]),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))])])])]),
      Transform(DEF='Engine_pod_trans_2_',translation=(-9.94,.8,4.9),
        children=[
        Shape(
          geometry=Extrusion(USE='Engine_pod'),
          appearance=Appearance(USE='plane_color')),
        Shape(
          geometry=Extrusion(DEF='fuel_pod_2',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.2,.1),(.8,.7),(.8,.8),(.8,.8),(.8,.7),(.4,.3),(.3,.2)],spine=[(-7.5,.15,0),(-4,.15,0),(-3,.15,0),(-2,.15,0),(-1.5,.15,0),(0,.15,0),(.2,.15,0)]),
          appearance=Appearance(USE='plane_color')),
        Transform(DEF='Engine_Prop_2',translation=(7.5,0,0),
          children=[
          Shape(
            geometry=Extrusion(DEF='Engine_inside_prop_2',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(.9,.9),(.85,.55)],spine=[(0,0,0),(.3,0,0),(.6,0,0)]),
            appearance=Appearance(USE='prop_base')),
          Shape(
            geometry=Extrusion(DEF='Engine_outside_prop_2',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.8,.8),(.5,.5),(.1,.1)],spine=[(.61,0,0),(1.3,0,0),(1.9,0,0)]),
            appearance=Appearance(USE='prop_base'))]),
        Group(
          #  Large Prop blades Group 2 
          children=[
          Transform(translation=(7.5,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(DEF='props_1a',creaseAngle=3.14,crossSection=[(-2.5,0),(-2.45,-.1),(-2.2,-.2),(-1.2,-.3),(0,-.15),(0,.15),(-1.2,.3),(-2.2,.2),(-2.45,.1),(-2.5,0)],orientation=[(1,0,0,.48),(1,0,0,.49),(1,0,0,.5)],scale=[(1,1),(1,1),(1,1)],solid=False,spine=[(.295,0,0),(.3,0,0),(.305,0,0)]),
                appearance=Appearance(USE='props'))])])]),
        Group(
          #  Small Prop blades Group 2 
          children=[
          Transform(rotation=(1,0,0,.785),translation=(8.2,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))])])])]),
      Transform(DEF='Engine_pod_trans_3_',translation=(-9.94,.8,-4.9),
        children=[
        Shape(
          geometry=Extrusion(DEF='Engine_pod_3',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.1,.2),(.4,.3),(.6,.5),(.8,.6),(.9,.9),(1,1)],spine=[(0,.3,0),(1,.25,0),(2,.2,0),(3,0,0),(4,0,0),(7.5,0,0)]),
          appearance=Appearance(USE='plane_color')),
        Shape(
          geometry=Extrusion(DEF='fuel_pod_3',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.2,.1),(.8,.7),(.8,.8),(.8,.8),(.8,.7),(.4,.3),(.3,.2)],spine=[(-7.5,.15,0),(-4,.15,0),(-3,.15,0),(-2,.15,0),(-1.5,.15,0),(0,.15,0),(.2,.15,0)]),
          appearance=Appearance(USE='plane_color')),
        Transform(DEF='Engine_Prop_3',translation=(7.5,0,0),
          children=[
          Shape(
            geometry=Extrusion(DEF='Engine_inside_prop_3',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(.9,.9),(.85,.55)],spine=[(0,0,0),(.3,0,0),(.6,0,0)]),
            appearance=Appearance(USE='prop_base')),
          Shape(
            geometry=Extrusion(DEF='Engine_outside_prop_3',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.8,.8),(.5,.5),(.1,.1)],spine=[(.61,0,0),(1.3,0,0),(1.9,0,0)]),
            appearance=Appearance(USE='prop_base'))]),
        Group(
          #  Large Prop blades Group 3 
          children=[
          Transform(translation=(7.5,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))])])]),
        Group(
          #  Small Prop blades Group 3 
          children=[
          Transform(rotation=(1,0,0,.785),translation=(8.2,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))])])])]),
      Transform(DEF='Engine_pod_trans_4',translation=(-13.24,.5,-11.7),
        children=[
        Shape(
          geometry=Extrusion(DEF='Engine_pod_4',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.1,.2),(.4,.3),(.6,.5),(.8,.6),(.9,.9),(1,1)],spine=[(0,.3,0),(1,.25,0),(2,.2,0),(3,0,0),(4,0,0),(7.5,0,0)]),
          appearance=Appearance(USE='plane_color')),
        Transform(DEF='Engine_Props_4',translation=(7.5,0,0),
          children=[
          Shape(
            geometry=Extrusion(DEF='Engine_inside_prop_4',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(.9,.9),(.85,.55)],spine=[(0,0,0),(.3,0,0),(.6,0,0)]),
            appearance=Appearance(USE='prop_base')),
          Shape(
            geometry=Extrusion(DEF='Engine_outside_prop_4',creaseAngle=2.5,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.8,.8),(.5,.5),(.1,.1)],spine=[(.61,0,0),(1.3,0,0),(1.9,0,0)]),
            appearance=Appearance(USE='prop_base'))]),
        Group(
          #  Large Prop blades Group 4 
          children=[
          Transform(translation=(7.5,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='big_props'),
                appearance=Appearance(USE='props'))])])]),
        Group(
          #  Small Prop blades Group 4 
          children=[
          Transform(rotation=(1,0,0,.785),translation=(8.2,0,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,1.57),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,3.14),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))]),
            Transform(rotation=(1,0,0,4.71),
              children=[
              Shape(
                geometry=Extrusion(USE='small_props'),
                appearance=Appearance(USE='props'))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bear.py")
